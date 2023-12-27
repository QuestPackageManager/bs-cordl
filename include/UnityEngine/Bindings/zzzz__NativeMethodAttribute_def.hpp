#pragma once
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
// Type: UnityEngine.Bindings::NativeMethodAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16017))
// CS Name: ::UnityEngine.Bindings::NativeMethodAttribute*
class CORDL_TYPE NativeMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <IsThreadSafe>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__IsThreadSafe_k__BackingField, put = __set__IsThreadSafe_k__BackingField)) bool _IsThreadSafe_k__BackingField;

  /// @brief Field <IsFreeFunction>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __get__IsFreeFunction_k__BackingField, put = __set__IsFreeFunction_k__BackingField)) bool _IsFreeFunction_k__BackingField;

  /// @brief Field <ThrowsException>k__BackingField, offset 0x1a, size 0x1
  __declspec(property(get = __get__ThrowsException_k__BackingField, put = __set__ThrowsException_k__BackingField)) bool _ThrowsException_k__BackingField;

  /// @brief Field <HasExplicitThis>k__BackingField, offset 0x1b, size 0x1
  __declspec(property(get = __get__HasExplicitThis_k__BackingField, put = __set__HasExplicitThis_k__BackingField)) bool _HasExplicitThis_k__BackingField;

  __declspec(property(put = set_Name))::StringW Name;

  __declspec(property(put = set_IsThreadSafe)) bool IsThreadSafe;

  __declspec(property(put = set_IsFreeFunction)) bool IsFreeFunction;

  __declspec(property(put = set_ThrowsException)) bool ThrowsException;

  __declspec(property(put = set_HasExplicitThis)) bool HasExplicitThis;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  constexpr bool& __get__IsThreadSafe_k__BackingField();

  constexpr bool const& __get__IsThreadSafe_k__BackingField() const;

  constexpr void __set__IsThreadSafe_k__BackingField(bool value);

  constexpr bool& __get__IsFreeFunction_k__BackingField();

  constexpr bool const& __get__IsFreeFunction_k__BackingField() const;

  constexpr void __set__IsFreeFunction_k__BackingField(bool value);

  constexpr bool& __get__ThrowsException_k__BackingField();

  constexpr bool const& __get__ThrowsException_k__BackingField() const;

  constexpr void __set__ThrowsException_k__BackingField(bool value);

  constexpr bool& __get__HasExplicitThis_k__BackingField();

  constexpr bool const& __get__HasExplicitThis_k__BackingField() const;

  constexpr void __set__HasExplicitThis_k__BackingField(bool value);

  /// @brief Method set_Name addr 0x2d184b4 size 0x8 virtual true final true
  inline void set_Name(::StringW value);

  /// @brief Method set_IsThreadSafe addr 0x2d184bc size 0xc virtual true final true
  inline void set_IsThreadSafe(bool value);

  /// @brief Method set_IsFreeFunction addr 0x2d184c8 size 0xc virtual true final true
  inline void set_IsFreeFunction(bool value);

  /// @brief Method set_ThrowsException addr 0x2d184d4 size 0xc virtual true final true
  inline void set_ThrowsException(bool value);

  /// @brief Method set_HasExplicitThis addr 0x2d184e0 size 0xc virtual true final true
  inline void set_HasExplicitThis(bool value);

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2d184ec size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2d184f4 size 0x104 virtual false final false
  inline void _ctor(::StringW name);

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction);

  /// @brief Method .ctor addr 0x2d185f8 size 0x28 virtual false final false
  inline void _ctor(::StringW name, bool isFreeFunction);

  static inline ::UnityEngine::Bindings::NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction, bool isThreadSafe);

  /// @brief Method .ctor addr 0x2d18620 size 0x34 virtual false final false
  inline void _ctor(::StringW name, bool isFreeFunction, bool isThreadSafe);

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethodAttribute(NativeMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethodAttribute(NativeMethodAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethodAttribute();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeMethodAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeMethodAttribute*, "UnityEngine.Bindings", "NativeMethodAttribute");
