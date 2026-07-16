#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NativeNameAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeNameAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::NativeNameAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::NativeNameAttribute*, "UnityEngine.Bindings", "NativeNameAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeNameAttribute
class CORDL_TYPE NativeNameAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Name)) ::StringW Name;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeNameAttribute* New_ctor(::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6bb2b2c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method set_Name, addr 0x6bb2b24, size 0x8, virtual true, abstract: false, final true
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeNameAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeNameAttribute(NativeNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeNameAttribute(NativeNameAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23029 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeNameAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Bindings::NativeNameAttribute) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Bindings
