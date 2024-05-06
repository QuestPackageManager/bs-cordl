#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/MarshalAsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__UnmanagedType_def.hpp"
#include "System/Runtime/InteropServices/zzzz__VarEnum_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MarshalAsAttribute)
namespace System::Runtime::InteropServices {
struct UnmanagedType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::MarshalAsAttribute);
// Type: System.Runtime.InteropServices::MarshalAsAttribute
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 70, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::MarshalAsAttribute*
class CORDL_TYPE MarshalAsAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field ArraySubType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_ArraySubType, put = __cordl_internal_set_ArraySubType))::System::Runtime::InteropServices::UnmanagedType ArraySubType;

  /// @brief Field IidParameterIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_IidParameterIndex, put = __cordl_internal_set_IidParameterIndex)) int32_t IidParameterIndex;

  /// @brief Field MarshalCookie, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_MarshalCookie, put = __cordl_internal_set_MarshalCookie))::StringW MarshalCookie;

  /// @brief Field MarshalType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_MarshalType, put = __cordl_internal_set_MarshalType))::StringW MarshalType;

  /// @brief Field MarshalTypeRef, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_MarshalTypeRef, put = __cordl_internal_set_MarshalTypeRef))::System::Type* MarshalTypeRef;

  /// @brief Field SafeArraySubType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SafeArraySubType, put = __cordl_internal_set_SafeArraySubType))::System::Runtime::InteropServices::VarEnum SafeArraySubType;

  /// @brief Field SafeArrayUserDefinedSubType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SafeArrayUserDefinedSubType, put = __cordl_internal_set_SafeArrayUserDefinedSubType))::System::Type* SafeArrayUserDefinedSubType;

  /// @brief Field SizeConst, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SizeConst, put = __cordl_internal_set_SizeConst)) int32_t SizeConst;

  /// @brief Field SizeParamIndex, offset 0x44, size 0x2
  __declspec(property(get = __cordl_internal_get_SizeParamIndex, put = __cordl_internal_set_SizeParamIndex)) int16_t SizeParamIndex;

  __declspec(property(get = get_Value))::System::Runtime::InteropServices::UnmanagedType Value;

  /// @brief Field utype, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_utype, put = __cordl_internal_set_utype))::System::Runtime::InteropServices::UnmanagedType utype;

  /// @brief Method Copy, addr 0x285b288, size 0x64, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::MarshalAsAttribute* Copy();

  static inline ::System::Runtime::InteropServices::MarshalAsAttribute* New_ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType);

  constexpr ::System::Runtime::InteropServices::UnmanagedType const& __cordl_internal_get_ArraySubType() const;

  constexpr ::System::Runtime::InteropServices::UnmanagedType& __cordl_internal_get_ArraySubType();

  constexpr int32_t const& __cordl_internal_get_IidParameterIndex() const;

  constexpr int32_t& __cordl_internal_get_IidParameterIndex();

  constexpr ::StringW const& __cordl_internal_get_MarshalCookie() const;

  constexpr ::StringW& __cordl_internal_get_MarshalCookie();

  constexpr ::StringW const& __cordl_internal_get_MarshalType() const;

  constexpr ::StringW& __cordl_internal_get_MarshalType();

  constexpr ::System::Type*& __cordl_internal_get_MarshalTypeRef();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_MarshalTypeRef() const;

  constexpr ::System::Runtime::InteropServices::VarEnum const& __cordl_internal_get_SafeArraySubType() const;

  constexpr ::System::Runtime::InteropServices::VarEnum& __cordl_internal_get_SafeArraySubType();

  constexpr ::System::Type*& __cordl_internal_get_SafeArrayUserDefinedSubType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_SafeArrayUserDefinedSubType() const;

  constexpr int32_t const& __cordl_internal_get_SizeConst() const;

  constexpr int32_t& __cordl_internal_get_SizeConst();

  constexpr int16_t const& __cordl_internal_get_SizeParamIndex() const;

  constexpr int16_t& __cordl_internal_get_SizeParamIndex();

  constexpr ::System::Runtime::InteropServices::UnmanagedType const& __cordl_internal_get_utype() const;

  constexpr ::System::Runtime::InteropServices::UnmanagedType& __cordl_internal_get_utype();

  constexpr void __cordl_internal_set_ArraySubType(::System::Runtime::InteropServices::UnmanagedType value);

  constexpr void __cordl_internal_set_IidParameterIndex(int32_t value);

  constexpr void __cordl_internal_set_MarshalCookie(::StringW value);

  constexpr void __cordl_internal_set_MarshalType(::StringW value);

  constexpr void __cordl_internal_set_MarshalTypeRef(::System::Type* value);

  constexpr void __cordl_internal_set_SafeArraySubType(::System::Runtime::InteropServices::VarEnum value);

  constexpr void __cordl_internal_set_SafeArrayUserDefinedSubType(::System::Type* value);

  constexpr void __cordl_internal_set_SizeConst(int32_t value);

  constexpr void __cordl_internal_set_SizeParamIndex(int16_t value);

  constexpr void __cordl_internal_set_utype(::System::Runtime::InteropServices::UnmanagedType value);

  /// @brief Method .ctor, addr 0x285b258, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::InteropServices::UnmanagedType unmanagedType);

  /// @brief Method get_Value, addr 0x285b280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::InteropServices::UnmanagedType get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarshalAsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarshalAsAttribute(MarshalAsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarshalAsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarshalAsAttribute(MarshalAsAttribute const&) = delete;

  /// @brief Field MarshalCookie, offset: 0x10, size: 0x8, def value: None
  ::StringW ___MarshalCookie;

  /// @brief Field MarshalType, offset: 0x18, size: 0x8, def value: None
  ::StringW ___MarshalType;

  /// @brief Field MarshalTypeRef, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___MarshalTypeRef;

  /// @brief Field SafeArrayUserDefinedSubType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___SafeArrayUserDefinedSubType;

  /// @brief Field utype, offset: 0x30, size: 0x4, def value: None
  ::System::Runtime::InteropServices::UnmanagedType ___utype;

  /// @brief Field ArraySubType, offset: 0x34, size: 0x4, def value: None
  ::System::Runtime::InteropServices::UnmanagedType ___ArraySubType;

  /// @brief Field SafeArraySubType, offset: 0x38, size: 0x4, def value: None
  ::System::Runtime::InteropServices::VarEnum ___SafeArraySubType;

  /// @brief Field SizeConst, offset: 0x3c, size: 0x4, def value: None
  int32_t ___SizeConst;

  /// @brief Field IidParameterIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___IidParameterIndex;

  /// @brief Field SizeParamIndex, offset: 0x44, size: 0x2, def value: None
  int16_t ___SizeParamIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::MarshalAsAttribute, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___MarshalCookie) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___MarshalType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___MarshalTypeRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___SafeArrayUserDefinedSubType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___utype) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___ArraySubType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___SafeArraySubType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___SizeConst) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___IidParameterIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::MarshalAsAttribute, ___SizeParamIndex) == 0x44, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::MarshalAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::MarshalAsAttribute*, "System.Runtime.InteropServices", "MarshalAsAttribute");
