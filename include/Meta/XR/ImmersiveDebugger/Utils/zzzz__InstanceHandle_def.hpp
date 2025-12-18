#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/InstanceHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Utils.InstanceHandle
struct CORDL_TYPE InstanceHandle {
public:
  // Declarations
  __declspec(property(get = get_Instance)) ::UnityW<::UnityEngine::Object> Instance;

  __declspec(property(get = get_InstanceId)) int32_t InstanceId;

  __declspec(property(get = get_IsStatic)) bool IsStatic;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>"
  constexpr operator ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*();

  /// @brief Method Equals, addr 0x5898458, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5898404, size 0x54, virtual true, abstract: false, final true
  inline bool Equals(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle other);

  /// @brief Method GetHashCode, addr 0x58984f8, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Static, addr 0x58983ec, size 0x18, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Static(::System::Type* type);

  /// @brief Method .ctor, addr 0x5898370, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method .ctor, addr 0x5891f24, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::UnityEngine::Object* instance);

  /// @brief Method get_Instance, addr 0x5898348, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_Instance();

  /// @brief Method get_InstanceId, addr 0x5898358, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InstanceId();

  /// @brief Method get_IsStatic, addr 0x5898360, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsStatic();

  /// @brief Method get_Type, addr 0x5898350, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_Valid, addr 0x5898168, size 0xe8, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>"
  constexpr ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* i___System__IEquatable_1___Meta__XR__ImmersiveDebugger__Utils__InstanceHandle_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceHandle();

  // Ctor Parameters [CppParam { name: "_Instance_k__BackingField", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty:
  // "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_InstanceId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceHandle(::UnityW<::UnityEngine::Object> _Instance_k__BackingField, ::System::Type* _Type_k__BackingField, int32_t _InstanceId_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18317 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Instance>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> _Instance_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _Type_k__BackingField;

  /// @brief Field <InstanceId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _InstanceId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, _Instance_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, _Type_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, _InstanceId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, 0x18>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, "Meta.XR.ImmersiveDebugger.Utils", "InstanceHandle");
