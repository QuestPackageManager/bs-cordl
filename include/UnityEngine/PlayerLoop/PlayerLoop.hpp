#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/PlayerLoop/EarlyUpdate.hpp"
#include "UnityEngine/PlayerLoop/FixedUpdate.hpp"
#include "UnityEngine/PlayerLoop/Initialization.hpp"
#include "UnityEngine/PlayerLoop/PostLateUpdate.hpp"
#include "UnityEngine/PlayerLoop/PreLateUpdate.hpp"
#include "UnityEngine/PlayerLoop/PreUpdate.hpp"
#include "UnityEngine/PlayerLoop/TimeUpdate.hpp"
#include "UnityEngine/PlayerLoop/Update.hpp"
#ifdef __cpp_modules
export module PlayerLoop;
#endif
