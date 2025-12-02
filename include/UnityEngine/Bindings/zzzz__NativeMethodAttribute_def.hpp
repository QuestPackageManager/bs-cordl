#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeMethodAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeMethodAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeMethodAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeMethodAttribute
class CORDL_TYPE NativeMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_HasExplicitThis)) bool HasExplicitThis;

  __declspec(property(put = set_IsFreeFunction)) bool IsFreeFunction;

  __declspec(property(put = set_IsThreadSafe)) bool IsThreadSafe;

  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(put = set_ThrowsException)) bool ThrowsException;

  /// @brief Field <HasExplicitThis>k__BackingField, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get__HasExplicitThis_k__BackingField, put = __cordl_internal_set__HasExplicitThis_k__BackingField)) bool _HasExplicitThis_k__BackingField;

  /// @brief Field <IsFreeFunction>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__IsFreeFunction_k__BackingField, put = __cordl_internal_set__IsFreeFunction_k__BackingField)) bool _IsFreeFunction_k__BackingField;

  /// @brief Field <IsThreadSafe>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsThreadSafe_k__BackingField, put = __cordl_internal_set__IsThreadSafe_k__BackingField)) bool _IsThreadSafe_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <ThrowsException>k__BackingField, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get__ThrowsException_k__BackingField, put = __cordl_internal_set__ThrowsException_k__BackingField)) bool _ThrowsException_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor();

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name);

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction);

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction, bool isThreadSafe);

  constexpr bool const& __cordl_internal_get__HasExplicitThis_k__BackingField() const;

  constexpr bool& __cordl_internal_get__HasExplicitThis_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsFreeFunction_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsFreeFunction_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsThreadSafe_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsThreadSafe_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr bool const& __cordl_internal_get__ThrowsException_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ThrowsException_k__BackingField();

  constexpr void __cordl_internal_set__HasExplicitThis_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsFreeFunction_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsThreadSafe_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ThrowsException_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6981e6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6981e70, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x6981f68, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool isFreeFunction);

  /// @brief Method .ctor, addr 0x6981f8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool isFreeFunction, bool isThreadSafe);

  /// @brief Method set_HasExplicitThis, addr 0x6981e64, size 0x8, virtual true, abstract: false, final true
  inline void set_HasExplicitThis(bool value);

  /// @brief Method set_IsFreeFunction, addr 0x6981e54, size 0x8, virtual true, abstract: false, final true
  inline void set_IsFreeFunction(bool value);

  /// @brief Method set_IsThreadSafe, addr 0x6981e4c, size 0x8, virtual true, abstract: false, final true
  inline void set_IsThreadSafe(bool value);

  /// @brief Method set_Name, addr 0x6981e44, size 0x8, virtual true, abstract: false, final true
  inline void set_Name(::StringW value);

  /// @brief Method set_ThrowsException, addr 0x6981e5c, size 0x8, virtual true, abstract: false, final true
  inline void set_ThrowsException(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethodAttribute(NativeMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethodAttribute(NativeMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22699 };

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsThreadSafe>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsThreadSafe_k__BackingField;

  /// @brief Field <IsFreeFunction>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____IsFreeFunction_k__BackingField;

  /// @brief Field <ThrowsException>k__BackingField, offset: 0x1a, size: 0x1, def value: None
  bool ____ThrowsException_k__BackingField;

  /// @brief Field <HasExplicitThis>k__BackingField, offset: 0x1b, size: 0x1, def value: None
  bool ____HasExplicitThis_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeMethodAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeMethodAttribute, ____IsThreadSafe_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeMethodAttribute, ____IsFreeFunction_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeMethodAttribute, ____ThrowsException_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeMethodAttribute, ____HasExplicitThis_k__BackingField) == 0x1b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeMethodAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeMethodAttribute*, "UnityEngine.Bindings", "NativeMethodAttribute");
