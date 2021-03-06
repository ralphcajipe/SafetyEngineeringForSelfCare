/**
* a prototype: When I just want to be alone for awhile
* surrounded by intelligent systems that can be trusted, e.g. jarvis
*/

entryCode = lock.getEntryCode();
if (entryCode == lock.authorizedCode)
{
	  happyStatus = Happy.getStatus();
	  sadLevel = SadSensor.get();
	  if (sadLevel < dangerLevel)
	  	state = safe;
	  else
	  	state = unsafe:
	  if (happyStatus == Happy.inPlace() )
	  	state = safe;
	  if (state == safe)
	  {
	  	Door.locked = false;
	  	Door.unlock();
    }
  	else
    {
      Door.lock();
      Door.locked := true;
    }
}
