#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertUtils)
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json::Utilities {
template <typename T1, typename T2> struct StructMultiKey_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class __ConvertUtils____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class IConvertible;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Version;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils;
}
namespace Newtonsoft::Json::Utilities {
class __ConvertUtils____c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ConvertUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0);
// Type: ::ConvertResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::ConvertUtils::ConvertResult
struct CORDL_TYPE __ConvertUtils__ConvertResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConvertUtils__ConvertResult_Unwrapped
  enum struct ____ConvertUtils__ConvertResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_CannotConvertNull = static_cast<int32_t>(0x1),
    __E_NotInstantiableType = static_cast<int32_t>(0x2),
    __E_NoValidConversion = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConvertUtils__ConvertResult_Unwrapped() const noexcept {
    return static_cast<____ConvertUtils__ConvertResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConvertUtils__ConvertResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConvertUtils__ConvertResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CannotConvertNull value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const CannotConvertNull;

  /// @brief Field NoValidConversion value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const NoValidConversion;

  /// @brief Field NotInstantiableType value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const NotInstantiableType;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ConvertUtils::<>c__DisplayClass8_0*
class CORDL_TYPE __ConvertUtils____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call))::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  static inline ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreateCastConverter>b__0, addr 0x2a3df74, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Object* _CreateCastConverter_b__0(::System::Object* o);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get_call() const;

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x2a3a624, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConvertUtils____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConvertUtils____c__DisplayClass8_0(__ConvertUtils____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConvertUtils____c__DisplayClass8_0(__ConvertUtils____c__DisplayClass8_0 const&) = delete;

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0, ___call) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ConvertUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::ConvertUtils*
class CORDL_TYPE ConvertUtils : public ::System::Object {
public:
  // Declarations
  using ConvertResult = ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult;

  using __c__DisplayClass8_0 = ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0;

  /// @brief Field CastConverters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CastConverters,
                             put = setStaticF_CastConverters))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                               ::System::Func_2<::System::Object*, ::System::Object*>*>* CastConverters;

  /// @brief Field PrimitiveTypeCodes, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_PrimitiveTypeCodes,
               put = setStaticF_PrimitiveTypeCodes))::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> PrimitiveTypeCodes;

  /// @brief Field TypeCodeMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeCodeMap,
                             put = setStaticF_TypeCodeMap))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* TypeCodeMap;

  /// @brief Method Convert, addr 0x2a3aeb4, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Object* Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method ConvertOrCast, addr 0x2a3bf90, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method CreateCastConverter, addr 0x2a3a3e4, size 0x240, virtual false, abstract: false, final false
  static inline ::System::Func_2<::System::Object*, ::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*> t);

  /// @brief Method DecimalTryParse, addr 0x2a3c3d8, size 0x958, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult DecimalTryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ByRef<::System::Decimal> value);

  /// @brief Method EnsureTypeAssignable, addr 0x2a3bd60, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Object* EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType);

  /// @brief Method FromBigInteger, addr 0x2a3a9a8, size 0x50c, virtual false, abstract: false, final false
  static inline ::System::Object* FromBigInteger(::System::Numerics::BigInteger i, ::System::Type* targetType);

  /// @brief Method GetTypeCode, addr 0x2a39e1c, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t);

  /// @brief Method GetTypeCode, addr 0x2a39e84, size 0x268, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t, ByRef<bool> isEnum);

  /// @brief Method GetTypeInformation, addr 0x2a3a1d4, size 0xec, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* convertable);

  /// @brief Method Int32TryParse, addr 0x2a3c11c, size 0x164, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ByRef<int32_t> value);

  /// @brief Method Int64TryParse, addr 0x2a3c280, size 0x158, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ByRef<int64_t> value);

  /// @brief Method IsConvertible, addr 0x2a3a2c0, size 0x94, virtual false, abstract: false, final false
  static inline bool IsConvertible(::System::Type* t);

  /// @brief Method IsInteger, addr 0x2a3bc30, size 0x90, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Object* value);

  /// @brief Method ParseTimeSpan, addr 0x2a3a354, size 0x90, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ParseTimeSpan(::StringW input);

  /// @brief Method ToBigInteger, addr 0x2a3a62c, size 0x37c, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger ToBigInteger(::System::Object* value);

  /// @brief Method TryConvert, addr 0x2a3bb28, size 0x108, virtual false, abstract: false, final false
  static inline bool TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ByRef<::System::Object*> value);

  /// @brief Method TryConvertGuid, addr 0x2a3cd30, size 0x5c, virtual false, abstract: false, final false
  static inline bool TryConvertGuid(::StringW s, ByRef<::System::Guid> g);

  /// @brief Method TryConvertInternal, addr 0x2a3b134, size 0x9f4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult TryConvertInternal(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture,
                                                                                                ::System::Type* targetType, ByRef<::System::Object*> value);

  /// @brief Method TryHexTextToInt, addr 0x2a3cd8c, size 0xbc, virtual false, abstract: false, final false
  static inline bool TryHexTextToInt(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t end, ByRef<int32_t> value);

  /// @brief Method VersionTryParse, addr 0x2a3bcc0, size 0x8, virtual false, abstract: false, final false
  static inline bool VersionTryParse(::StringW input, ByRef<::System::Version*> result);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                 ::System::Func_2<::System::Object*, ::System::Object*>*>*
  getStaticF_CastConverters();

  static inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> getStaticF_PrimitiveTypeCodes();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* getStaticF_TypeCodeMap();

  static inline void setStaticF_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                ::System::Func_2<::System::Object*, ::System::Object*>*>* value);

  static inline void setStaticF_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> value);

  static inline void setStaticF_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConvertUtils(ConvertUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConvertUtils(ConvertUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ConvertUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ConvertUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils*, "Newtonsoft.Json.Utilities", "ConvertUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass8_0*, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass8_0");
