#ifdef __cpp_modules
module;
#endif

#pragma once
#include "UnityEngine/InputForUI/CommandEvent.hpp"
#include "UnityEngine/InputForUI/Event.hpp"
#include "UnityEngine/InputForUI/EventConsumer.hpp"
#include "UnityEngine/InputForUI/EventModifiers.hpp"
#include "UnityEngine/InputForUI/EventProvider.hpp"
#include "UnityEngine/InputForUI/EventSanitizer.hpp"
#include "UnityEngine/InputForUI/EventSource.hpp"
#include "UnityEngine/InputForUI/IEventProperties.hpp"
#include "UnityEngine/InputForUI/IEventProviderImpl.hpp"
#include "UnityEngine/InputForUI/IMECompositionEvent.hpp"
#include "UnityEngine/InputForUI/InputEventPartialProvider.hpp"
#include "UnityEngine/InputForUI/InputManagerProvider.hpp"
#include "UnityEngine/InputForUI/KeyEvent.hpp"
#include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "UnityEngine/InputForUI/NavigationEventRepeatHelper.hpp"
#include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "UnityEngine/InputForUI/PointerState.hpp"
#include "UnityEngine/InputForUI/TextInputEvent.hpp"
#ifdef __cpp_modules
export module InputForUI;
#endif
