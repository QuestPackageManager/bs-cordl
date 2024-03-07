#pragma once
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
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
namespace Newtonsoft::Json::Utilities {
class __ConvertUtils____c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Globalization {
class CultureInfo;
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
class __ConvertUtils____c__DisplayClass9_0;
}
namespace Newtonsoft::Json::Utilities {
struct __ConvertUtils__TypeConvertKey;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ConvertUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0);
MARK_VAL_T(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey);
// Type: ::TypeConvertKey
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::ConvertUtils::TypeConvertKey
struct CORDL_TYPE __ConvertUtils__TypeConvertKey {
public:
  // Declarations
  __declspec(property(get = get_InitialType))::System::Type* InitialType;

  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method Equals, addr 0x27b17dc, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x27b1864, size 0x24, virtual false, abstract: false, final false
  inline bool Equals(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey other);

  /// @brief Method GetHashCode, addr 0x27b1794, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x27b01b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* initialType, ::System::Type* targetType);

  /// @brief Method get_InitialType, addr 0x27b1784, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_InitialType();

  /// @brief Method get_TargetType, addr 0x27b178c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_TargetType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConvertUtils__TypeConvertKey();

  // Ctor Parameters [CppParam { name: "_initialType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_targetType", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr __ConvertUtils__TypeConvertKey(::System::Type* _initialType, ::System::Type* _targetType) noexcept;

  /// @brief Field _initialType, offset: 0x0, size: 0x8, def value: None
  ::System::Type* _initialType;

  /// @brief Field _targetType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _targetType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, 0x10>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, _initialType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, _targetType) == 0x8, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
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
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ConvertUtils::<>c__DisplayClass9_0*
class CORDL_TYPE __ConvertUtils____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field call, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_call, put = __cordl_internal_set_call))::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call;

  static inline ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0* New_ctor();

  /// @brief Method <CreateCastConverter>b__0, addr 0x27b1888, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Object* _CreateCastConverter_b__0(::System::Object* o);

  constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*& __cordl_internal_get_call();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>*> const& __cordl_internal_get_call() const;

  constexpr void __cordl_internal_set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x27aeefc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConvertUtils____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConvertUtils____c__DisplayClass9_0(__ConvertUtils____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConvertUtils____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConvertUtils____c__DisplayClass9_0(__ConvertUtils____c__DisplayClass9_0 const&) = delete;

  /// @brief Field call, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* ___call;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0, ___call) == 0x10, "Offset mismatch!");

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

  using TypeConvertKey = ::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey;

  using __c__DisplayClass9_0 = ::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0;

  /// @brief Field CastConverters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CastConverters,
                             put = setStaticF_CastConverters))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey,
                                                                                                               ::System::Func_2<::System::Object*, ::System::Object*>*>* CastConverters;

  /// @brief Field PrimitiveTypeCodes, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_PrimitiveTypeCodes,
               put = setStaticF_PrimitiveTypeCodes))::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> PrimitiveTypeCodes;

  /// @brief Field TypeCodeMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeCodeMap,
                             put = setStaticF_TypeCodeMap))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* TypeCodeMap;

  /// @brief Method Convert, addr 0x27aef04, size 0x274, virtual false, abstract: false, final false
  static inline ::System::Object* Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method ConvertOrCast, addr 0x27b0038, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);

  /// @brief Method CreateCastConverter, addr 0x27aecc8, size 0x234, virtual false, abstract: false, final false
  static inline ::System::Func_2<::System::Object*, ::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey t);

  /// @brief Method EnsureTypeAssignable, addr 0x27afe04, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Object* EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType);

  /// @brief Method GetConverter, addr 0x27afd10, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* t);

  /// @brief Method GetTypeCode, addr 0x27aa1bc, size 0x68, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t);

  /// @brief Method GetTypeCode, addr 0x27ae85c, size 0x280, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t, ByRef<bool> isEnum);

  /// @brief Method GetTypeInformation, addr 0x27ab43c, size 0xec, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* convertable);

  /// @brief Method HexCharToInt, addr 0x27b0694, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t HexCharToInt(char16_t ch);

  /// @brief Method HexTextToInt, addr 0x27b05b4, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t HexTextToInt(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t end);

  /// @brief Method Int32TryParse, addr 0x27b01c0, size 0x164, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ByRef<int32_t> value);

  /// @brief Method Int64TryParse, addr 0x27b0324, size 0x158, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t length, ByRef<int64_t> value);

  /// @brief Method IsConvertible, addr 0x27aebdc, size 0x94, virtual false, abstract: false, final false
  static inline bool IsConvertible(::System::Type* t);

  /// @brief Method IsInteger, addr 0x27afb90, size 0x90, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Object* value);

  /// @brief Method ParseTimeSpan, addr 0x27aec70, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ParseTimeSpan(::StringW input);

  /// @brief Method TryConvert, addr 0x27afa88, size 0x108, virtual false, abstract: false, final false
  static inline bool TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ByRef<::System::Object*> value);

  /// @brief Method TryConvertGuid, addr 0x27b047c, size 0x138, virtual false, abstract: false, final false
  static inline bool TryConvertGuid(::StringW s, ByRef<::System::Guid> g);

  /// @brief Method TryConvertInternal, addr 0x27af178, size 0x910, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::__ConvertUtils__ConvertResult TryConvertInternal(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture,
                                                                                                ::System::Type* targetType, ByRef<::System::Object*> value);

  /// @brief Method VersionTryParse, addr 0x27afc20, size 0xf0, virtual false, abstract: false, final false
  static inline bool VersionTryParse(::StringW input, ByRef<::System::Version*> result);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>*
  getStaticF_CastConverters();

  static inline ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*, ::Array<::Newtonsoft::Json::Utilities::TypeInformation*>*> getStaticF_PrimitiveTypeCodes();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* getStaticF_TypeCodeMap();

  static inline void setStaticF_CastConverters(
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>* value);

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
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils____c__DisplayClass9_0*, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ConvertUtils__TypeConvertKey, "Newtonsoft.Json.Utilities", "ConvertUtils/TypeConvertKey");
