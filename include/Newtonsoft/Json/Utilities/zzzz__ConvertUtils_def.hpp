#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertUtils)
namespace Newtonsoft::Json::Utilities {
struct ConvertUtils_ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils___c__DisplayClass8_0;
}
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
struct ConvertUtils_ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils___c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ConvertUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0);
// Dependencies
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct CORDL_TYPE ConvertUtils_ConvertResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConvertUtils_ConvertResult_Unwrapped
  enum struct __ConvertUtils_ConvertResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_CannotConvertNull = static_cast<int32_t>(0x1),
    __E_NotInstantiableType = static_cast<int32_t>(0x2),
    __E_NoValidConversion = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConvertUtils_ConvertResult_Unwrapped() const noexcept {
    return static_cast<__ConvertUtils_ConvertResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertUtils_ConvertResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConvertUtils_ConvertResult(int32_t value__) noexcept;

  /// @brief Field CannotConvertNull value: I32(1)
  static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult const CannotConvertNull;

  /// @brief Field NoValidConversion value: I32(3)
  static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult const NoValidConversion;

  /// @brief Field NotInstantiableType value: I32(2)
  static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult const NotInstantiableType;

  /// @brief Field Success value: I32(0)
  static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10196 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0
class CORDL_TYPE ConvertUtils___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  static inline ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreateCastConverter>b__0, addr 0x3ec6658, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Object* _CreateCastConverter_b__0(::System::Object* o);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* const& __cordl_internal_get_call() const;

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x3ec2cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertUtils___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConvertUtils___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConvertUtils___c__DisplayClass8_0(ConvertUtils___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConvertUtils___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConvertUtils___c__DisplayClass8_0(ConvertUtils___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10197 };

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0, ___call) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils
class CORDL_TYPE ConvertUtils : public ::System::Object {
public:
  // Declarations
  using ConvertResult = ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult;

  using __c__DisplayClass8_0 = ::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0;

  /// @brief Field CastConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CastConverters,
                      put = setStaticF_CastConverters)) ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*>,
                                                                                                         ::System::Func_2<::System::Object*, ::System::Object*>*>* CastConverters;

  /// @brief Field PrimitiveTypeCodes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PrimitiveTypeCodes,
                      put = setStaticF_PrimitiveTypeCodes)) ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*>
      PrimitiveTypeCodes;

  /// @brief Field TypeCodeMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TypeCodeMap,
                      put = setStaticF_TypeCodeMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* TypeCodeMap;

  /// @brief Method Convert, addr 0x3ec3550, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Object* Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method ConvertOrCast, addr 0x3ec45e8, size 0x184, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method CreateCastConverter, addr 0x3ec2a84, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Func_2<::System::Object*, ::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*, ::System::Type*> t);

  /// @brief Method DecimalTryParse, addr 0x3ec4a68, size 0x9d4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult DecimalTryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ::ByRef<::System::Decimal> value);

  /// @brief Method EnsureTypeAssignable, addr 0x3ec43dc, size 0x20c, virtual false, abstract: false, final false
  static inline ::System::Object* EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType);

  /// @brief Method FromBigInteger, addr 0x3ec3038, size 0x518, virtual false, abstract: false, final false
  static inline ::System::Object* FromBigInteger(::System::Numerics::BigInteger i, ::System::Type* targetType);

  /// @brief Method GetTypeCode, addr 0x3ec24b4, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t);

  /// @brief Method GetTypeCode, addr 0x3ec251c, size 0x270, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t, ::ByRef<bool> isEnum);

  /// @brief Method GetTypeInformation, addr 0x3ec2874, size 0xec, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* convertable);

  /// @brief Method Int32TryParse, addr 0x3ec477c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ::ByRef<int32_t> value);

  /// @brief Method Int64TryParse, addr 0x3ec48f8, size 0x170, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ::ByRef<int64_t> value);

  /// @brief Method IsConvertible, addr 0x3ec2960, size 0x94, virtual false, abstract: false, final false
  static inline bool IsConvertible(::System::Type* t);

  /// @brief Method IsInteger, addr 0x3ec42ac, size 0x90, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Object* value);

  /// @brief Method ParseTimeSpan, addr 0x3ec29f4, size 0x90, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ParseTimeSpan(::StringW input);

  /// @brief Method ToBigInteger, addr 0x3ec2cc4, size 0x374, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger ToBigInteger(::System::Object* value);

  /// @brief Method TryConvert, addr 0x3ec41a4, size 0x108, virtual false, abstract: false, final false
  static inline bool TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ::ByRef<::System::Object*> value);

  /// @brief Method TryConvertGuid, addr 0x3ec543c, size 0x5c, virtual false, abstract: false, final false
  static inline bool TryConvertGuid(::StringW s, ::ByRef<::System::Guid> g);

  /// @brief Method TryConvertInternal, addr 0x3ec37b8, size 0x9ec, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult TryConvertInternal(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType,
                                                                                             ::ByRef<::System::Object*> value);

  /// @brief Method TryHexTextToInt, addr 0x3ec5498, size 0xd0, virtual false, abstract: false, final false
  static inline bool TryHexTextToInt(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t end, ::ByRef<int32_t> value);

  /// @brief Method VersionTryParse, addr 0x3ec433c, size 0x8, virtual false, abstract: false, final false
  static inline bool VersionTryParse(::StringW input, ::ByRef<::System::Version*> result);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ConvertUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ConvertUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils*, "Newtonsoft.Json.Utilities", "ConvertUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils___c__DisplayClass8_0*, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass8_0");
