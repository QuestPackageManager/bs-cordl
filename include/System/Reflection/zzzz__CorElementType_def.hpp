#pragma once
// IWYU pragma private; include "System/Reflection/CorElementType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CorElementType)
// Forward declare root types
namespace System::Reflection {
struct CorElementType;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CorElementType);
// Type: System.Reflection::CorElementType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::CorElementType
struct CORDL_TYPE CorElementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __CorElementType_Unwrapped
  enum struct __CorElementType_Unwrapped : uint8_t {
    __E_End = static_cast<uint8_t>(0x0u),
    __E_Void = static_cast<uint8_t>(0x1u),
    __E_Boolean = static_cast<uint8_t>(0x2u),
    __E_Char = static_cast<uint8_t>(0x3u),
    __E_I1 = static_cast<uint8_t>(0x4u),
    __E_U1 = static_cast<uint8_t>(0x5u),
    __E_I2 = static_cast<uint8_t>(0x6u),
    __E_U2 = static_cast<uint8_t>(0x7u),
    __E_I4 = static_cast<uint8_t>(0x8u),
    __E_U4 = static_cast<uint8_t>(0x9u),
    __E_I8 = static_cast<uint8_t>(0xau),
    __E_U8 = static_cast<uint8_t>(0xbu),
    __E_R4 = static_cast<uint8_t>(0xcu),
    __E_R8 = static_cast<uint8_t>(0xdu),
    __E_String = static_cast<uint8_t>(0xeu),
    __E_Ptr = static_cast<uint8_t>(0xfu),
    __E_ByRef = static_cast<uint8_t>(0x10u),
    __E_ValueType = static_cast<uint8_t>(0x11u),
    __E_Class = static_cast<uint8_t>(0x12u),
    __E_Var = static_cast<uint8_t>(0x13u),
    __E_Array = static_cast<uint8_t>(0x14u),
    __E_GenericInst = static_cast<uint8_t>(0x15u),
    __E_TypedByRef = static_cast<uint8_t>(0x16u),
    __E_I = static_cast<uint8_t>(0x18u),
    __E_U = static_cast<uint8_t>(0x19u),
    __E_FnPtr = static_cast<uint8_t>(0x1bu),
    __E_Object = static_cast<uint8_t>(0x1cu),
    __E_SzArray = static_cast<uint8_t>(0x1du),
    __E_MVar = static_cast<uint8_t>(0x1eu),
    __E_CModReqd = static_cast<uint8_t>(0x1fu),
    __E_CModOpt = static_cast<uint8_t>(0x20u),
    __E_Internal = static_cast<uint8_t>(0x21u),
    __E_Max = static_cast<uint8_t>(0x22u),
    __E_Modifier = static_cast<uint8_t>(0x40u),
    __E_Sentinel = static_cast<uint8_t>(0x41u),
    __E_Pinned = static_cast<uint8_t>(0x45u),
    __E_ELEMENT_TYPE_END = static_cast<uint8_t>(0x0u),
    __E_ELEMENT_TYPE_VOID = static_cast<uint8_t>(0x1u),
    __E_ELEMENT_TYPE_BOOLEAN = static_cast<uint8_t>(0x2u),
    __E_ELEMENT_TYPE_CHAR = static_cast<uint8_t>(0x3u),
    __E_ELEMENT_TYPE_I1 = static_cast<uint8_t>(0x4u),
    __E_ELEMENT_TYPE_U1 = static_cast<uint8_t>(0x5u),
    __E_ELEMENT_TYPE_I2 = static_cast<uint8_t>(0x6u),
    __E_ELEMENT_TYPE_U2 = static_cast<uint8_t>(0x7u),
    __E_ELEMENT_TYPE_I4 = static_cast<uint8_t>(0x8u),
    __E_ELEMENT_TYPE_U4 = static_cast<uint8_t>(0x9u),
    __E_ELEMENT_TYPE_I8 = static_cast<uint8_t>(0xau),
    __E_ELEMENT_TYPE_U8 = static_cast<uint8_t>(0xbu),
    __E_ELEMENT_TYPE_R4 = static_cast<uint8_t>(0xcu),
    __E_ELEMENT_TYPE_R8 = static_cast<uint8_t>(0xdu),
    __E_ELEMENT_TYPE_STRING = static_cast<uint8_t>(0xeu),
    __E_ELEMENT_TYPE_PTR = static_cast<uint8_t>(0xfu),
    __E_ELEMENT_TYPE_BYREF = static_cast<uint8_t>(0x10u),
    __E_ELEMENT_TYPE_VALUETYPE = static_cast<uint8_t>(0x11u),
    __E_ELEMENT_TYPE_CLASS = static_cast<uint8_t>(0x12u),
    __E_ELEMENT_TYPE_VAR = static_cast<uint8_t>(0x13u),
    __E_ELEMENT_TYPE_ARRAY = static_cast<uint8_t>(0x14u),
    __E_ELEMENT_TYPE_GENERICINST = static_cast<uint8_t>(0x15u),
    __E_ELEMENT_TYPE_TYPEDBYREF = static_cast<uint8_t>(0x16u),
    __E_ELEMENT_TYPE_I = static_cast<uint8_t>(0x18u),
    __E_ELEMENT_TYPE_U = static_cast<uint8_t>(0x19u),
    __E_ELEMENT_TYPE_FNPTR = static_cast<uint8_t>(0x1bu),
    __E_ELEMENT_TYPE_OBJECT = static_cast<uint8_t>(0x1cu),
    __E_ELEMENT_TYPE_SZARRAY = static_cast<uint8_t>(0x1du),
    __E_ELEMENT_TYPE_MVAR = static_cast<uint8_t>(0x1eu),
    __E_ELEMENT_TYPE_CMOD_REQD = static_cast<uint8_t>(0x1fu),
    __E_ELEMENT_TYPE_CMOD_OPT = static_cast<uint8_t>(0x20u),
    __E_ELEMENT_TYPE_INTERNAL = static_cast<uint8_t>(0x21u),
    __E_ELEMENT_TYPE_MAX = static_cast<uint8_t>(0x22u),
    __E_ELEMENT_TYPE_MODIFIER = static_cast<uint8_t>(0x40u),
    __E_ELEMENT_TYPE_SENTINEL = static_cast<uint8_t>(0x41u),
    __E_ELEMENT_TYPE_PINNED = static_cast<uint8_t>(0x45u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CorElementType_Unwrapped() const noexcept {
    return static_cast<__CorElementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CorElementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CorElementType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Array value: static_cast<uint8_t>(0x14u)
  static ::System::Reflection::CorElementType const Array;

  /// @brief Field Boolean value: static_cast<uint8_t>(0x2u)
  static ::System::Reflection::CorElementType const Boolean;

  /// @brief Field ByRef value: static_cast<uint8_t>(0x10u)
  static ::System::Reflection::CorElementType const ByRef;

  /// @brief Field CModOpt value: static_cast<uint8_t>(0x20u)
  static ::System::Reflection::CorElementType const CModOpt;

  /// @brief Field CModReqd value: static_cast<uint8_t>(0x1fu)
  static ::System::Reflection::CorElementType const CModReqd;

  /// @brief Field Char value: static_cast<uint8_t>(0x3u)
  static ::System::Reflection::CorElementType const Char;

  /// @brief Field Class value: static_cast<uint8_t>(0x12u)
  static ::System::Reflection::CorElementType const Class;

  /// @brief Field ELEMENT_TYPE_ARRAY value: static_cast<uint8_t>(0x14u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_ARRAY;

  /// @brief Field ELEMENT_TYPE_BOOLEAN value: static_cast<uint8_t>(0x2u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_BOOLEAN;

  /// @brief Field ELEMENT_TYPE_BYREF value: static_cast<uint8_t>(0x10u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_BYREF;

  /// @brief Field ELEMENT_TYPE_CHAR value: static_cast<uint8_t>(0x3u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_CHAR;

  /// @brief Field ELEMENT_TYPE_CLASS value: static_cast<uint8_t>(0x12u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_CLASS;

  /// @brief Field ELEMENT_TYPE_CMOD_OPT value: static_cast<uint8_t>(0x20u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_CMOD_OPT;

  /// @brief Field ELEMENT_TYPE_CMOD_REQD value: static_cast<uint8_t>(0x1fu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_CMOD_REQD;

  /// @brief Field ELEMENT_TYPE_END value: static_cast<uint8_t>(0x0u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_END;

  /// @brief Field ELEMENT_TYPE_FNPTR value: static_cast<uint8_t>(0x1bu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_FNPTR;

  /// @brief Field ELEMENT_TYPE_GENERICINST value: static_cast<uint8_t>(0x15u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_GENERICINST;

  /// @brief Field ELEMENT_TYPE_I value: static_cast<uint8_t>(0x18u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_I;

  /// @brief Field ELEMENT_TYPE_I1 value: static_cast<uint8_t>(0x4u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_I1;

  /// @brief Field ELEMENT_TYPE_I2 value: static_cast<uint8_t>(0x6u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_I2;

  /// @brief Field ELEMENT_TYPE_I4 value: static_cast<uint8_t>(0x8u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_I4;

  /// @brief Field ELEMENT_TYPE_I8 value: static_cast<uint8_t>(0xau)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_I8;

  /// @brief Field ELEMENT_TYPE_INTERNAL value: static_cast<uint8_t>(0x21u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_INTERNAL;

  /// @brief Field ELEMENT_TYPE_MAX value: static_cast<uint8_t>(0x22u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_MAX;

  /// @brief Field ELEMENT_TYPE_MODIFIER value: static_cast<uint8_t>(0x40u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_MODIFIER;

  /// @brief Field ELEMENT_TYPE_MVAR value: static_cast<uint8_t>(0x1eu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_MVAR;

  /// @brief Field ELEMENT_TYPE_OBJECT value: static_cast<uint8_t>(0x1cu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_OBJECT;

  /// @brief Field ELEMENT_TYPE_PINNED value: static_cast<uint8_t>(0x45u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_PINNED;

  /// @brief Field ELEMENT_TYPE_PTR value: static_cast<uint8_t>(0xfu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_PTR;

  /// @brief Field ELEMENT_TYPE_R4 value: static_cast<uint8_t>(0xcu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_R4;

  /// @brief Field ELEMENT_TYPE_R8 value: static_cast<uint8_t>(0xdu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_R8;

  /// @brief Field ELEMENT_TYPE_SENTINEL value: static_cast<uint8_t>(0x41u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_SENTINEL;

  /// @brief Field ELEMENT_TYPE_STRING value: static_cast<uint8_t>(0xeu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_STRING;

  /// @brief Field ELEMENT_TYPE_SZARRAY value: static_cast<uint8_t>(0x1du)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_SZARRAY;

  /// @brief Field ELEMENT_TYPE_TYPEDBYREF value: static_cast<uint8_t>(0x16u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_TYPEDBYREF;

  /// @brief Field ELEMENT_TYPE_U value: static_cast<uint8_t>(0x19u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_U;

  /// @brief Field ELEMENT_TYPE_U1 value: static_cast<uint8_t>(0x5u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_U1;

  /// @brief Field ELEMENT_TYPE_U2 value: static_cast<uint8_t>(0x7u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_U2;

  /// @brief Field ELEMENT_TYPE_U4 value: static_cast<uint8_t>(0x9u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_U4;

  /// @brief Field ELEMENT_TYPE_U8 value: static_cast<uint8_t>(0xbu)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_U8;

  /// @brief Field ELEMENT_TYPE_VALUETYPE value: static_cast<uint8_t>(0x11u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_VALUETYPE;

  /// @brief Field ELEMENT_TYPE_VAR value: static_cast<uint8_t>(0x13u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_VAR;

  /// @brief Field ELEMENT_TYPE_VOID value: static_cast<uint8_t>(0x1u)
  static ::System::Reflection::CorElementType const ELEMENT_TYPE_VOID;

  /// @brief Field End value: static_cast<uint8_t>(0x0u)
  static ::System::Reflection::CorElementType const End;

  /// @brief Field FnPtr value: static_cast<uint8_t>(0x1bu)
  static ::System::Reflection::CorElementType const FnPtr;

  /// @brief Field GenericInst value: static_cast<uint8_t>(0x15u)
  static ::System::Reflection::CorElementType const GenericInst;

  /// @brief Field I value: static_cast<uint8_t>(0x18u)
  static ::System::Reflection::CorElementType const I;

  /// @brief Field I1 value: static_cast<uint8_t>(0x4u)
  static ::System::Reflection::CorElementType const I1;

  /// @brief Field I2 value: static_cast<uint8_t>(0x6u)
  static ::System::Reflection::CorElementType const I2;

  /// @brief Field I4 value: static_cast<uint8_t>(0x8u)
  static ::System::Reflection::CorElementType const I4;

  /// @brief Field I8 value: static_cast<uint8_t>(0xau)
  static ::System::Reflection::CorElementType const I8;

  /// @brief Field Internal value: static_cast<uint8_t>(0x21u)
  static ::System::Reflection::CorElementType const Internal;

  /// @brief Field MVar value: static_cast<uint8_t>(0x1eu)
  static ::System::Reflection::CorElementType const MVar;

  /// @brief Field Max value: static_cast<uint8_t>(0x22u)
  static ::System::Reflection::CorElementType const Max;

  /// @brief Field Modifier value: static_cast<uint8_t>(0x40u)
  static ::System::Reflection::CorElementType const Modifier;

  /// @brief Field Object value: static_cast<uint8_t>(0x1cu)
  static ::System::Reflection::CorElementType const Object;

  /// @brief Field Pinned value: static_cast<uint8_t>(0x45u)
  static ::System::Reflection::CorElementType const Pinned;

  /// @brief Field Ptr value: static_cast<uint8_t>(0xfu)
  static ::System::Reflection::CorElementType const Ptr;

  /// @brief Field R4 value: static_cast<uint8_t>(0xcu)
  static ::System::Reflection::CorElementType const R4;

  /// @brief Field R8 value: static_cast<uint8_t>(0xdu)
  static ::System::Reflection::CorElementType const R8;

  /// @brief Field Sentinel value: static_cast<uint8_t>(0x41u)
  static ::System::Reflection::CorElementType const Sentinel;

  /// @brief Field String value: static_cast<uint8_t>(0xeu)
  static ::System::Reflection::CorElementType const String;

  /// @brief Field SzArray value: static_cast<uint8_t>(0x1du)
  static ::System::Reflection::CorElementType const SzArray;

  /// @brief Field TypedByRef value: static_cast<uint8_t>(0x16u)
  static ::System::Reflection::CorElementType const TypedByRef;

  /// @brief Field U value: static_cast<uint8_t>(0x19u)
  static ::System::Reflection::CorElementType const U;

  /// @brief Field U1 value: static_cast<uint8_t>(0x5u)
  static ::System::Reflection::CorElementType const U1;

  /// @brief Field U2 value: static_cast<uint8_t>(0x7u)
  static ::System::Reflection::CorElementType const U2;

  /// @brief Field U4 value: static_cast<uint8_t>(0x9u)
  static ::System::Reflection::CorElementType const U4;

  /// @brief Field U8 value: static_cast<uint8_t>(0xbu)
  static ::System::Reflection::CorElementType const U8;

  /// @brief Field ValueType value: static_cast<uint8_t>(0x11u)
  static ::System::Reflection::CorElementType const ValueType;

  /// @brief Field Var value: static_cast<uint8_t>(0x13u)
  static ::System::Reflection::CorElementType const Var;

  /// @brief Field Void value: static_cast<uint8_t>(0x1u)
  static ::System::Reflection::CorElementType const Void;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CorElementType, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::CorElementType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CorElementType, "System.Reflection", "CorElementType");
