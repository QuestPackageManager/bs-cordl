#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventPtr)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventPtr);
// Type: UnityEngine.InputSystem.LowLevel::InputEventPtr
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventPtr
struct CORDL_TYPE InputEventPtr {
public:
  // Declarations
  __declspec(property(get = get_data))::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> data;

  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_handled, put = set_handled)) bool handled;

  __declspec(property(get = get_id, put = set_id)) int32_t id;

  __declspec(property(get = get_internalTime, put = set_internalTime)) double_t internalTime;

  __declspec(property(get = get_sizeInBytes)) uint32_t sizeInBytes;

  __declspec(property(get = get_stateFormat))::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateOffset)) uint32_t stateOffset;

  __declspec(property(get = get_stateSizeInBytes)) uint32_t stateSizeInBytes;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_type))::UnityEngine::InputSystem::Utilities::FourCC type;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Method Equals, addr 0x3191cb8, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3191ca0, size 0x18, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr other);

  /// @brief Method From, addr 0x3191d60, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr From(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method FromInputEventPtr, addr 0x3191d64, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method GetHashCode, addr 0x3191d40, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOtherEvent> inline bool IsA();

  /// @brief Method Next, addr 0x3191c68, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr Next();

  /// @brief Method ToPointer, addr 0x3191c98, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> ToPointer();

  /// @brief Method ToString, addr 0x3191898, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3191568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method get_data, addr 0x31917d8, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> get_data();

  /// @brief Method get_deviceId, addr 0x3191630, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_handled, addr 0x3191570, size 0x1c, virtual false, abstract: false, final false
  inline bool get_handled();

  /// @brief Method get_id, addr 0x319158c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_internalTime, addr 0x319175c, size 0x18, virtual false, abstract: false, final false
  inline double_t get_internalTime();

  /// @brief Method get_sizeInBytes, addr 0x3191618, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_sizeInBytes();

  /// @brief Method get_stateFormat, addr 0x31917e0, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();

  /// @brief Method get_stateOffset, addr 0x3191b88, size 0xe0, virtual false, abstract: false, final false
  inline uint32_t get_stateOffset();

  /// @brief Method get_stateSizeInBytes, addr 0x3191930, size 0x11c, virtual false, abstract: false, final false
  inline uint32_t get_stateSizeInBytes();

  /// @brief Method get_time, addr 0x318b5d0, size 0x60, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_type, addr 0x31873b8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_type();

  /// @brief Method get_valid, addr 0x31873a8, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_();

  /// @brief Method op_Equality, addr 0x3191d48, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right);

  /// @brief Method op_Implicit, addr 0x31906dc, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr
  op_Implicit___UnityEngine__InputSystem__LowLevel__InputEventPtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method op_Implicit, addr 0x319106c, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>
  op_Implicit___cordl_internals__Ptr___UnityEngine__InputSystem__LowLevel__InputEvent_(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method op_Inequality, addr 0x3191d54, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right);

  /// @brief Method set_deviceId, addr 0x3191648, size 0x64, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method set_handled, addr 0x318ab24, size 0x78, virtual false, abstract: false, final false
  inline void set_handled(bool value);

  /// @brief Method set_id, addr 0x31915a8, size 0x70, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  /// @brief Method set_internalTime, addr 0x3191774, size 0x64, virtual false, abstract: false, final false
  inline void set_internalTime(double_t value);

  /// @brief Method set_time, addr 0x31916ac, size 0xb0, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventPtr();

  // Ctor Parameters [CppParam { name: "m_EventPtr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }]
  constexpr InputEventPtr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_EventPtr) noexcept;

  /// @brief Field m_EventPtr, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_EventPtr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventPtr, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventPtr, m_EventPtr) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventPtr, "UnityEngine.InputSystem.LowLevel", "InputEventPtr");
