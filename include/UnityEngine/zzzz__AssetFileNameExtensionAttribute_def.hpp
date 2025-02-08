#pragma once
// IWYU pragma private; include "UnityEngine/AssetFileNameExtensionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetFileNameExtensionAttribute)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine {
class AssetFileNameExtensionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetFileNameExtensionAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetFileNameExtensionAttribute
class CORDL_TYPE AssetFileNameExtensionAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <otherExtensions>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__otherExtensions_k__BackingField,
                      put = __cordl_internal_set__otherExtensions_k__BackingField)) ::System::Collections::Generic::IEnumerable_1<::StringW>* _otherExtensions_k__BackingField;

  /// @brief Field <preferredExtension>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredExtension_k__BackingField, put = __cordl_internal_set__preferredExtension_k__BackingField)) ::StringW _preferredExtension_k__BackingField;

  static inline ::UnityEngine::AssetFileNameExtensionAttribute* New_ctor(::StringW preferredExtension, ::ArrayW<::StringW, ::Array<::StringW>*> otherExtensions);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get__otherExtensions_k__BackingField() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get__otherExtensions_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__preferredExtension_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__preferredExtension_k__BackingField();

  constexpr void __cordl_internal_set__otherExtensions_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set__preferredExtension_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x491c07c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW preferredExtension, ::ArrayW<::StringW, ::Array<::StringW>*> otherExtensions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileNameExtensionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18693 };

  /// @brief Field <preferredExtension>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____preferredExtension_k__BackingField;

  /// @brief Field <otherExtensions>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ____otherExtensions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AssetFileNameExtensionAttribute, ____preferredExtension_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssetFileNameExtensionAttribute, ____otherExtensions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetFileNameExtensionAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetFileNameExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetFileNameExtensionAttribute*, "UnityEngine", "AssetFileNameExtensionAttribute");
