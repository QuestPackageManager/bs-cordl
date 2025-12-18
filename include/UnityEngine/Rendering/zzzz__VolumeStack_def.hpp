#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VolumeStack)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeStack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeStack);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeStack
class CORDL_TYPE VolumeStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isValid>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__isValid_k__BackingField, put = __cordl_internal_set__isValid_k__BackingField)) bool _isValid_k__BackingField;

  /// @brief Field components, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_components,
                      put = __cordl_internal_set_components)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components;

  __declspec(property(get = get_isValid, put = set_isValid)) bool isValid;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters)) ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*>
      parameters;

  /// @brief Field requiresReset, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresReset, put = __cordl_internal_set_requiresReset)) bool requiresReset;

  /// @brief Field requiresResetForAllProperties, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresResetForAllProperties, put = __cordl_internal_set_requiresResetForAllProperties)) bool requiresResetForAllProperties;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Clear, addr 0x6617ff0, size 0x180, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x66183e8, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetComponent, addr 0x6618374, size 0x74, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeComponent> GetComponent(::System::Type* type);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetComponent();

  static inline ::UnityEngine::Rendering::VolumeStack* New_ctor();

  /// @brief Method Reload, addr 0x6618170, size 0x204, virtual false, abstract: false, final false
  inline void Reload(::ArrayW<::System::Type*, ::Array<::System::Type*>*> componentTypes);

  constexpr bool const& __cordl_internal_get__isValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isValid_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* const& __cordl_internal_get_components() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_components();

  constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*> const& __cordl_internal_get_parameters() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*>& __cordl_internal_get_parameters();

  constexpr bool const& __cordl_internal_get_requiresReset() const;

  constexpr bool& __cordl_internal_get_requiresReset();

  constexpr bool const& __cordl_internal_get_requiresResetForAllProperties() const;

  constexpr bool& __cordl_internal_get_requiresResetForAllProperties();

  constexpr void __cordl_internal_set__isValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set_components(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_parameters(::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*> value);

  constexpr void __cordl_internal_set_requiresReset(bool value);

  constexpr void __cordl_internal_set_requiresResetForAllProperties(bool value);

  /// @brief Method .ctor, addr 0x6617f50, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isValid, addr 0x6618400, size 0x8, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_isValid, addr 0x6618408, size 0x8, virtual false, abstract: false, final false
  inline void set_isValid(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeStack(VolumeStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeStack(VolumeStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12352 };

  /// @brief Field components, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___components;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::VolumeParameter*, ::Array<::UnityEngine::Rendering::VolumeParameter*>*> ___parameters;

  /// @brief Field requiresReset, offset: 0x20, size: 0x1, def value: None
  bool ___requiresReset;

  /// @brief Field requiresResetForAllProperties, offset: 0x21, size: 0x1, def value: None
  bool ___requiresResetForAllProperties;

  /// @brief Field <isValid>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____isValid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___components) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___requiresReset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ___requiresResetForAllProperties) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeStack, ____isValid_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeStack, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeStack*, "UnityEngine.Rendering", "VolumeStack");
