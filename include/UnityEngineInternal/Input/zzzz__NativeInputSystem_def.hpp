#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputSystem)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeInputSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::Input::NativeInputSystem);
// Type: UnityEngineInternal.Input::NativeInputSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngineInternal::Input {
// Is value type: false
// CS Name: ::UnityEngineInternal.Input::NativeInputSystem*
class CORDL_TYPE NativeInputSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field onBeforeUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onBeforeUpdate, put = setStaticF_onBeforeUpdate)) ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* onBeforeUpdate;

  /// @brief Field onShouldRunUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onShouldRunUpdate, put = setStaticF_onShouldRunUpdate)) ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* onShouldRunUpdate;

  /// @brief Field onUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onUpdate, put = setStaticF_onUpdate)) ::UnityEngineInternal::Input::NativeUpdateCallback* onUpdate;

  /// @brief Field s_OnDeviceDiscoveredCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_OnDeviceDiscoveredCallback, put = setStaticF_s_OnDeviceDiscoveredCallback)) ::System::Action_2<int32_t, ::StringW>* s_OnDeviceDiscoveredCallback;

  /// @brief Method AllocateDeviceId, addr 0x4871940, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AllocateDeviceId();

  /// @brief Method IOCTL, addr 0x48719a4, size 0x5c, virtual false, abstract: false, final false
  static inline int64_t IOCTL(int32_t deviceId, int32_t code, ::System::IntPtr data, int32_t sizeInBytes);

  /// @brief Method NotifyBeforeUpdate, addr 0x48716b8, size 0x7c, virtual false, abstract: false, final false
  static inline void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  /// @brief Method NotifyDeviceDiscovered, addr 0x48717d0, size 0x90, virtual false, abstract: false, final false
  static inline void NotifyDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor);

  /// @brief Method NotifyUpdate, addr 0x4871734, size 0x9c, virtual false, abstract: false, final false
  static inline void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer);

  /// @brief Method QueueInputEvent, addr 0x4871968, size 0x3c, virtual false, abstract: false, final false
  static inline void QueueInputEvent(::System::IntPtr inputEvent);

  /// @brief Method SetPollingFrequency, addr 0x4871a00, size 0x38, virtual false, abstract: false, final false
  static inline void SetPollingFrequency(float_t hertz);

  /// @brief Method ShouldRunUpdate, addr 0x4871860, size 0x90, virtual false, abstract: false, final false
  static inline void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval);

  /// @brief Method Update, addr 0x4871a38, size 0x3c, virtual false, abstract: false, final false
  static inline void Update(::UnityEngineInternal::Input::NativeInputUpdateType updateType);

  static inline ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* getStaticF_onBeforeUpdate();

  static inline ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* getStaticF_onShouldRunUpdate();

  static inline ::UnityEngineInternal::Input::NativeUpdateCallback* getStaticF_onUpdate();

  static inline ::System::Action_2<int32_t, ::StringW>* getStaticF_s_OnDeviceDiscoveredCallback();

  /// @brief Method get_currentTime, addr 0x48718f0, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_currentTime();

  /// @brief Method get_currentTimeOffsetToRealtimeSinceStartup, addr 0x4871918, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_currentTimeOffsetToRealtimeSinceStartup();

  /// @brief Method get_onDeviceDiscovered, addr 0x4871570, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Action_2<int32_t, ::StringW>* get_onDeviceDiscovered();

  static inline void setStaticF_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value);

  static inline void setStaticF_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value);

  static inline void setStaticF_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value);

  static inline void setStaticF_s_OnDeviceDiscoveredCallback(::System::Action_2<int32_t, ::StringW>* value);

  /// @brief Method set_hasDeviceDiscoveredCallback, addr 0x487164c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_hasDeviceDiscoveredCallback(bool value);

  /// @brief Method set_onDeviceDiscovered, addr 0x48715c8, size 0x84, virtual false, abstract: false, final false
  static inline void set_onDeviceDiscovered(::System::Action_2<int32_t, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeInputSystem(NativeInputSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeInputSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeInputSystem(NativeInputSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
NEED_NO_BOX(::UnityEngineInternal::Input::NativeInputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
