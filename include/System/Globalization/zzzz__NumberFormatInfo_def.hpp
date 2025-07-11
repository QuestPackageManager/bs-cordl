#pragma once
// IWYU pragma private; include "System/Globalization/NumberFormatInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NumberFormatInfo)
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Globalization {
class NumberFormatInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::NumberFormatInfo);
// Dependencies System.Globalization.NumberStyles, System.ICloneable, System.IFormatProvider, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.NumberFormatInfo
class CORDL_TYPE NumberFormatInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrencyDecimalDigits)) int32_t CurrencyDecimalDigits;

  __declspec(property(get = get_CurrencyDecimalSeparator)) ::StringW CurrencyDecimalSeparator;

  __declspec(property(get = get_CurrencyGroupSeparator)) ::StringW CurrencyGroupSeparator;

  __declspec(property(get = get_CurrencyGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> CurrencyGroupSizes;

  __declspec(property(get = get_CurrencyNegativePattern)) int32_t CurrencyNegativePattern;

  __declspec(property(get = get_CurrencyPositivePattern)) int32_t CurrencyPositivePattern;

  __declspec(property(get = get_CurrencySymbol)) ::StringW CurrencySymbol;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_NaNSymbol, put = set_NaNSymbol)) ::StringW NaNSymbol;

  __declspec(property(get = get_NegativeInfinitySymbol)) ::StringW NegativeInfinitySymbol;

  __declspec(property(get = get_NegativeSign)) ::StringW NegativeSign;

  __declspec(property(get = get_NumberDecimalDigits)) int32_t NumberDecimalDigits;

  __declspec(property(get = get_NumberDecimalSeparator)) ::StringW NumberDecimalSeparator;

  __declspec(property(get = get_NumberGroupSeparator, put = set_NumberGroupSeparator)) ::StringW NumberGroupSeparator;

  __declspec(property(get = get_NumberGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> NumberGroupSizes;

  __declspec(property(get = get_NumberNegativePattern)) int32_t NumberNegativePattern;

  __declspec(property(get = get_PerMilleSymbol)) ::StringW PerMilleSymbol;

  __declspec(property(get = get_PercentDecimalDigits)) int32_t PercentDecimalDigits;

  __declspec(property(get = get_PercentDecimalSeparator)) ::StringW PercentDecimalSeparator;

  __declspec(property(get = get_PercentGroupSeparator)) ::StringW PercentGroupSeparator;

  __declspec(property(get = get_PercentGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> PercentGroupSizes;

  __declspec(property(get = get_PercentNegativePattern)) int32_t PercentNegativePattern;

  __declspec(property(get = get_PercentPositivePattern)) int32_t PercentPositivePattern;

  __declspec(property(get = get_PercentSymbol)) ::StringW PercentSymbol;

  __declspec(property(get = get_PositiveInfinitySymbol)) ::StringW PositiveInfinitySymbol;

  __declspec(property(get = get_PositiveSign)) ::StringW PositiveSign;

  /// @brief Field ansiCurrencySymbol, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ansiCurrencySymbol, put = __cordl_internal_set_ansiCurrencySymbol)) ::StringW ansiCurrencySymbol;

  /// @brief Field currencyDecimalDigits, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_currencyDecimalDigits, put = __cordl_internal_set_currencyDecimalDigits)) int32_t currencyDecimalDigits;

  /// @brief Field currencyDecimalSeparator, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyDecimalSeparator, put = __cordl_internal_set_currencyDecimalSeparator)) ::StringW currencyDecimalSeparator;

  /// @brief Field currencyGroupSeparator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyGroupSeparator, put = __cordl_internal_set_currencyGroupSeparator)) ::StringW currencyGroupSeparator;

  /// @brief Field currencyGroupSizes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyGroupSizes, put = __cordl_internal_set_currencyGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> currencyGroupSizes;

  /// @brief Field currencyNegativePattern, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_currencyNegativePattern, put = __cordl_internal_set_currencyNegativePattern)) int32_t currencyNegativePattern;

  /// @brief Field currencyPositivePattern, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_currencyPositivePattern, put = __cordl_internal_set_currencyPositivePattern)) int32_t currencyPositivePattern;

  /// @brief Field currencySymbol, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currencySymbol, put = __cordl_internal_set_currencySymbol)) ::StringW currencySymbol;

  /// @brief Field digitSubstitution, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_digitSubstitution, put = __cordl_internal_set_digitSubstitution)) int32_t digitSubstitution;

  /// @brief Field invariantInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_invariantInfo, put = setStaticF_invariantInfo)) ::System::Globalization::NumberFormatInfo* invariantInfo;

  /// @brief Field isReadOnly, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field m_dataItem, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_dataItem, put = __cordl_internal_set_m_dataItem)) int32_t m_dataItem;

  /// @brief Field m_isInvariant, offset 0xd2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isInvariant, put = __cordl_internal_set_m_isInvariant)) bool m_isInvariant;

  /// @brief Field m_useUserOverride, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useUserOverride, put = __cordl_internal_set_m_useUserOverride)) bool m_useUserOverride;

  /// @brief Field nanSymbol, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_nanSymbol, put = __cordl_internal_set_nanSymbol)) ::StringW nanSymbol;

  /// @brief Field nativeDigits, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_nativeDigits, put = __cordl_internal_set_nativeDigits)) ::ArrayW<::StringW, ::Array<::StringW>*> nativeDigits;

  /// @brief Field negativeInfinitySymbol, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_negativeInfinitySymbol, put = __cordl_internal_set_negativeInfinitySymbol)) ::StringW negativeInfinitySymbol;

  /// @brief Field negativeSign, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_negativeSign, put = __cordl_internal_set_negativeSign)) ::StringW negativeSign;

  /// @brief Field numberDecimalDigits, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_numberDecimalDigits, put = __cordl_internal_set_numberDecimalDigits)) int32_t numberDecimalDigits;

  /// @brief Field numberDecimalSeparator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_numberDecimalSeparator, put = __cordl_internal_set_numberDecimalSeparator)) ::StringW numberDecimalSeparator;

  /// @brief Field numberGroupSeparator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_numberGroupSeparator, put = __cordl_internal_set_numberGroupSeparator)) ::StringW numberGroupSeparator;

  /// @brief Field numberGroupSizes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_numberGroupSizes, put = __cordl_internal_set_numberGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> numberGroupSizes;

  /// @brief Field numberNegativePattern, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_numberNegativePattern, put = __cordl_internal_set_numberNegativePattern)) int32_t numberNegativePattern;

  /// @brief Field perMilleSymbol, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_perMilleSymbol, put = __cordl_internal_set_perMilleSymbol)) ::StringW perMilleSymbol;

  /// @brief Field percentDecimalDigits, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_percentDecimalDigits, put = __cordl_internal_set_percentDecimalDigits)) int32_t percentDecimalDigits;

  /// @brief Field percentDecimalSeparator, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_percentDecimalSeparator, put = __cordl_internal_set_percentDecimalSeparator)) ::StringW percentDecimalSeparator;

  /// @brief Field percentGroupSeparator, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_percentGroupSeparator, put = __cordl_internal_set_percentGroupSeparator)) ::StringW percentGroupSeparator;

  /// @brief Field percentGroupSizes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_percentGroupSizes, put = __cordl_internal_set_percentGroupSizes)) ::ArrayW<int32_t, ::Array<int32_t>*> percentGroupSizes;

  /// @brief Field percentNegativePattern, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_percentNegativePattern, put = __cordl_internal_set_percentNegativePattern)) int32_t percentNegativePattern;

  /// @brief Field percentPositivePattern, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_percentPositivePattern, put = __cordl_internal_set_percentPositivePattern)) int32_t percentPositivePattern;

  /// @brief Field percentSymbol, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_percentSymbol, put = __cordl_internal_set_percentSymbol)) ::StringW percentSymbol;

  /// @brief Field positiveInfinitySymbol, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_positiveInfinitySymbol, put = __cordl_internal_set_positiveInfinitySymbol)) ::StringW positiveInfinitySymbol;

  /// @brief Field positiveSign, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_positiveSign, put = __cordl_internal_set_positiveSign)) ::StringW positiveSign;

  /// @brief Field validForParseAsCurrency, offset 0xd4, size 0x1
  __declspec(property(get = __cordl_internal_get_validForParseAsCurrency, put = __cordl_internal_set_validForParseAsCurrency)) bool validForParseAsCurrency;

  /// @brief Field validForParseAsNumber, offset 0xd3, size 0x1
  __declspec(property(get = __cordl_internal_get_validForParseAsNumber, put = __cordl_internal_set_validForParseAsNumber)) bool validForParseAsNumber;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IFormatProvider"
  constexpr operator ::System::IFormatProvider*() noexcept;

  /// @brief Method Clone, addr 0x3da3234, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method GetFormat, addr 0x3da35b0, size 0x98, virtual true, abstract: false, final true
  inline ::System::Object* GetFormat(::System::Type* formatType);

  /// @brief Method GetInstance, addr 0x3da2f94, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Globalization::NumberFormatInfo* GetInstance(::System::IFormatProvider* formatProvider);

  static inline ::System::Globalization::NumberFormatInfo* New_ctor();

  static inline ::System::Globalization::NumberFormatInfo* New_ctor(::System::Globalization::CultureData* cultureData);

  /// @brief Method OnDeserialized, addr 0x3da2ba4, size 0x4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x3da2ba0, size 0x4, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x3da2b1c, size 0x84, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method ReadOnly, addr 0x3da2ec4, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Globalization::NumberFormatInfo* ReadOnly(::System::Globalization::NumberFormatInfo* nfi);

  /// @brief Method ValidateParseStyleFloatingPoint, addr 0x3da3714, size 0xc0, virtual false, abstract: false, final false
  static inline void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles style);

  /// @brief Method ValidateParseStyleInteger, addr 0x3da3648, size 0xcc, virtual false, abstract: false, final false
  static inline void ValidateParseStyleInteger(::System::Globalization::NumberStyles style);

  /// @brief Method VerifyGroupSeparator, addr 0x3da2ba8, size 0x68, virtual false, abstract: false, final false
  static inline void VerifyGroupSeparator(::StringW groupSep, ::StringW propertyName);

  /// @brief Method VerifyWritable, addr 0x3da2db4, size 0x6c, virtual false, abstract: false, final false
  inline void VerifyWritable();

  constexpr ::StringW const& __cordl_internal_get_ansiCurrencySymbol() const;

  constexpr ::StringW& __cordl_internal_get_ansiCurrencySymbol();

  constexpr int32_t const& __cordl_internal_get_currencyDecimalDigits() const;

  constexpr int32_t& __cordl_internal_get_currencyDecimalDigits();

  constexpr ::StringW const& __cordl_internal_get_currencyDecimalSeparator() const;

  constexpr ::StringW& __cordl_internal_get_currencyDecimalSeparator();

  constexpr ::StringW const& __cordl_internal_get_currencyGroupSeparator() const;

  constexpr ::StringW& __cordl_internal_get_currencyGroupSeparator();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_currencyGroupSizes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_currencyGroupSizes();

  constexpr int32_t const& __cordl_internal_get_currencyNegativePattern() const;

  constexpr int32_t& __cordl_internal_get_currencyNegativePattern();

  constexpr int32_t const& __cordl_internal_get_currencyPositivePattern() const;

  constexpr int32_t& __cordl_internal_get_currencyPositivePattern();

  constexpr ::StringW const& __cordl_internal_get_currencySymbol() const;

  constexpr ::StringW& __cordl_internal_get_currencySymbol();

  constexpr int32_t const& __cordl_internal_get_digitSubstitution() const;

  constexpr int32_t& __cordl_internal_get_digitSubstitution();

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr int32_t const& __cordl_internal_get_m_dataItem() const;

  constexpr int32_t& __cordl_internal_get_m_dataItem();

  constexpr bool const& __cordl_internal_get_m_isInvariant() const;

  constexpr bool& __cordl_internal_get_m_isInvariant();

  constexpr bool const& __cordl_internal_get_m_useUserOverride() const;

  constexpr bool& __cordl_internal_get_m_useUserOverride();

  constexpr ::StringW const& __cordl_internal_get_nanSymbol() const;

  constexpr ::StringW& __cordl_internal_get_nanSymbol();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_nativeDigits() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_nativeDigits();

  constexpr ::StringW const& __cordl_internal_get_negativeInfinitySymbol() const;

  constexpr ::StringW& __cordl_internal_get_negativeInfinitySymbol();

  constexpr ::StringW const& __cordl_internal_get_negativeSign() const;

  constexpr ::StringW& __cordl_internal_get_negativeSign();

  constexpr int32_t const& __cordl_internal_get_numberDecimalDigits() const;

  constexpr int32_t& __cordl_internal_get_numberDecimalDigits();

  constexpr ::StringW const& __cordl_internal_get_numberDecimalSeparator() const;

  constexpr ::StringW& __cordl_internal_get_numberDecimalSeparator();

  constexpr ::StringW const& __cordl_internal_get_numberGroupSeparator() const;

  constexpr ::StringW& __cordl_internal_get_numberGroupSeparator();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_numberGroupSizes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_numberGroupSizes();

  constexpr int32_t const& __cordl_internal_get_numberNegativePattern() const;

  constexpr int32_t& __cordl_internal_get_numberNegativePattern();

  constexpr ::StringW const& __cordl_internal_get_perMilleSymbol() const;

  constexpr ::StringW& __cordl_internal_get_perMilleSymbol();

  constexpr int32_t const& __cordl_internal_get_percentDecimalDigits() const;

  constexpr int32_t& __cordl_internal_get_percentDecimalDigits();

  constexpr ::StringW const& __cordl_internal_get_percentDecimalSeparator() const;

  constexpr ::StringW& __cordl_internal_get_percentDecimalSeparator();

  constexpr ::StringW const& __cordl_internal_get_percentGroupSeparator() const;

  constexpr ::StringW& __cordl_internal_get_percentGroupSeparator();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_percentGroupSizes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_percentGroupSizes();

  constexpr int32_t const& __cordl_internal_get_percentNegativePattern() const;

  constexpr int32_t& __cordl_internal_get_percentNegativePattern();

  constexpr int32_t const& __cordl_internal_get_percentPositivePattern() const;

  constexpr int32_t& __cordl_internal_get_percentPositivePattern();

  constexpr ::StringW const& __cordl_internal_get_percentSymbol() const;

  constexpr ::StringW& __cordl_internal_get_percentSymbol();

  constexpr ::StringW const& __cordl_internal_get_positiveInfinitySymbol() const;

  constexpr ::StringW& __cordl_internal_get_positiveInfinitySymbol();

  constexpr ::StringW const& __cordl_internal_get_positiveSign() const;

  constexpr ::StringW& __cordl_internal_get_positiveSign();

  constexpr bool const& __cordl_internal_get_validForParseAsCurrency() const;

  constexpr bool& __cordl_internal_get_validForParseAsCurrency();

  constexpr bool const& __cordl_internal_get_validForParseAsNumber() const;

  constexpr bool& __cordl_internal_get_validForParseAsNumber();

  constexpr void __cordl_internal_set_ansiCurrencySymbol(::StringW value);

  constexpr void __cordl_internal_set_currencyDecimalDigits(int32_t value);

  constexpr void __cordl_internal_set_currencyDecimalSeparator(::StringW value);

  constexpr void __cordl_internal_set_currencyGroupSeparator(::StringW value);

  constexpr void __cordl_internal_set_currencyGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_currencyNegativePattern(int32_t value);

  constexpr void __cordl_internal_set_currencyPositivePattern(int32_t value);

  constexpr void __cordl_internal_set_currencySymbol(::StringW value);

  constexpr void __cordl_internal_set_digitSubstitution(int32_t value);

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_m_dataItem(int32_t value);

  constexpr void __cordl_internal_set_m_isInvariant(bool value);

  constexpr void __cordl_internal_set_m_useUserOverride(bool value);

  constexpr void __cordl_internal_set_nanSymbol(::StringW value);

  constexpr void __cordl_internal_set_nativeDigits(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_negativeInfinitySymbol(::StringW value);

  constexpr void __cordl_internal_set_negativeSign(::StringW value);

  constexpr void __cordl_internal_set_numberDecimalDigits(int32_t value);

  constexpr void __cordl_internal_set_numberDecimalSeparator(::StringW value);

  constexpr void __cordl_internal_set_numberGroupSeparator(::StringW value);

  constexpr void __cordl_internal_set_numberGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_numberNegativePattern(int32_t value);

  constexpr void __cordl_internal_set_perMilleSymbol(::StringW value);

  constexpr void __cordl_internal_set_percentDecimalDigits(int32_t value);

  constexpr void __cordl_internal_set_percentDecimalSeparator(::StringW value);

  constexpr void __cordl_internal_set_percentGroupSeparator(::StringW value);

  constexpr void __cordl_internal_set_percentGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_percentNegativePattern(int32_t value);

  constexpr void __cordl_internal_set_percentPositivePattern(int32_t value);

  constexpr void __cordl_internal_set_percentSymbol(::StringW value);

  constexpr void __cordl_internal_set_positiveInfinitySymbol(::StringW value);

  constexpr void __cordl_internal_set_positiveSign(::StringW value);

  constexpr void __cordl_internal_set_validForParseAsCurrency(bool value);

  constexpr void __cordl_internal_set_validForParseAsNumber(bool value);

  /// @brief Method .ctor, addr 0x3da26e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3da26ec, size 0x430, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureData* cultureData);

  static inline ::System::Globalization::NumberFormatInfo* getStaticF_invariantInfo();

  /// @brief Method get_CurrencyDecimalDigits, addr 0x3da32a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrencyDecimalDigits();

  /// @brief Method get_CurrencyDecimalSeparator, addr 0x3da32a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrencyDecimalSeparator();

  /// @brief Method get_CurrencyGroupSeparator, addr 0x3da3420, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrencyGroupSeparator();

  /// @brief Method get_CurrencyGroupSizes, addr 0x3da32b8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_CurrencyGroupSizes();

  /// @brief Method get_CurrencyNegativePattern, addr 0x3da34c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrencyNegativePattern();

  /// @brief Method get_CurrencyPositivePattern, addr 0x3da3570, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrencyPositivePattern();

  /// @brief Method get_CurrencySymbol, addr 0x3da3428, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrencySymbol();

  /// @brief Method get_CurrentInfo, addr 0x3da3140, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Globalization::NumberFormatInfo* get_CurrentInfo();

  /// @brief Method get_InvariantInfo, addr 0x3da2e20, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Globalization::NumberFormatInfo* get_InvariantInfo();

  /// @brief Method get_IsReadOnly, addr 0x3da32b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_NaNSymbol, addr 0x3da3430, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NaNSymbol();

  /// @brief Method get_NegativeInfinitySymbol, addr 0x3da34e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NegativeInfinitySymbol();

  /// @brief Method get_NegativeSign, addr 0x3da34ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NegativeSign();

  /// @brief Method get_NumberDecimalDigits, addr 0x3da34f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NumberDecimalDigits();

  /// @brief Method get_NumberDecimalSeparator, addr 0x3da34fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NumberDecimalSeparator();

  /// @brief Method get_NumberGroupSeparator, addr 0x3da3504, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NumberGroupSeparator();

  /// @brief Method get_NumberGroupSizes, addr 0x3da3330, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_NumberGroupSizes();

  /// @brief Method get_NumberNegativePattern, addr 0x3da34cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NumberNegativePattern();

  /// @brief Method get_PerMilleSymbol, addr 0x3da35a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PerMilleSymbol();

  /// @brief Method get_PercentDecimalDigits, addr 0x3da3588, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PercentDecimalDigits();

  /// @brief Method get_PercentDecimalSeparator, addr 0x3da3590, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PercentDecimalSeparator();

  /// @brief Method get_PercentGroupSeparator, addr 0x3da3598, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PercentGroupSeparator();

  /// @brief Method get_PercentGroupSizes, addr 0x3da33a8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_PercentGroupSizes();

  /// @brief Method get_PercentNegativePattern, addr 0x3da34dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PercentNegativePattern();

  /// @brief Method get_PercentPositivePattern, addr 0x3da34d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PercentPositivePattern();

  /// @brief Method get_PercentSymbol, addr 0x3da35a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PercentSymbol();

  /// @brief Method get_PositiveInfinitySymbol, addr 0x3da3578, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PositiveInfinitySymbol();

  /// @brief Method get_PositiveSign, addr 0x3da3580, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PositiveSign();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IFormatProvider"
  constexpr ::System::IFormatProvider* i___System__IFormatProvider() noexcept;

  static inline void setStaticF_invariantInfo(::System::Globalization::NumberFormatInfo* value);

  /// @brief Method set_NaNSymbol, addr 0x3da3438, size 0x8c, virtual false, abstract: false, final false
  inline void set_NaNSymbol(::StringW value);

  /// @brief Method set_NumberGroupSeparator, addr 0x3da350c, size 0x64, virtual false, abstract: false, final false
  inline void set_NumberGroupSeparator(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberFormatInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumberFormatInfo(NumberFormatInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumberFormatInfo(NumberFormatInfo const&) = delete;

  /// @brief Field InvalidNumberStyles value: I32(-1024)
  static ::System::Globalization::NumberStyles const InvalidNumberStyles;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3710 };

  /// @brief Field numberGroupSizes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___numberGroupSizes;

  /// @brief Field currencyGroupSizes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___currencyGroupSizes;

  /// @brief Field percentGroupSizes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___percentGroupSizes;

  /// @brief Field positiveSign, offset: 0x28, size: 0x8, def value: None
  ::StringW ___positiveSign;

  /// @brief Field negativeSign, offset: 0x30, size: 0x8, def value: None
  ::StringW ___negativeSign;

  /// @brief Field numberDecimalSeparator, offset: 0x38, size: 0x8, def value: None
  ::StringW ___numberDecimalSeparator;

  /// @brief Field numberGroupSeparator, offset: 0x40, size: 0x8, def value: None
  ::StringW ___numberGroupSeparator;

  /// @brief Field currencyGroupSeparator, offset: 0x48, size: 0x8, def value: None
  ::StringW ___currencyGroupSeparator;

  /// @brief Field currencyDecimalSeparator, offset: 0x50, size: 0x8, def value: None
  ::StringW ___currencyDecimalSeparator;

  /// @brief Field currencySymbol, offset: 0x58, size: 0x8, def value: None
  ::StringW ___currencySymbol;

  /// @brief Field ansiCurrencySymbol, offset: 0x60, size: 0x8, def value: None
  ::StringW ___ansiCurrencySymbol;

  /// @brief Field nanSymbol, offset: 0x68, size: 0x8, def value: None
  ::StringW ___nanSymbol;

  /// @brief Field positiveInfinitySymbol, offset: 0x70, size: 0x8, def value: None
  ::StringW ___positiveInfinitySymbol;

  /// @brief Field negativeInfinitySymbol, offset: 0x78, size: 0x8, def value: None
  ::StringW ___negativeInfinitySymbol;

  /// @brief Field percentDecimalSeparator, offset: 0x80, size: 0x8, def value: None
  ::StringW ___percentDecimalSeparator;

  /// @brief Field percentGroupSeparator, offset: 0x88, size: 0x8, def value: None
  ::StringW ___percentGroupSeparator;

  /// @brief Field percentSymbol, offset: 0x90, size: 0x8, def value: None
  ::StringW ___percentSymbol;

  /// @brief Field perMilleSymbol, offset: 0x98, size: 0x8, def value: None
  ::StringW ___perMilleSymbol;

  /// @brief Field nativeDigits, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___nativeDigits;

  /// @brief Field m_dataItem, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_dataItem;

  /// @brief Field numberDecimalDigits, offset: 0xac, size: 0x4, def value: None
  int32_t ___numberDecimalDigits;

  /// @brief Field currencyDecimalDigits, offset: 0xb0, size: 0x4, def value: None
  int32_t ___currencyDecimalDigits;

  /// @brief Field currencyPositivePattern, offset: 0xb4, size: 0x4, def value: None
  int32_t ___currencyPositivePattern;

  /// @brief Field currencyNegativePattern, offset: 0xb8, size: 0x4, def value: None
  int32_t ___currencyNegativePattern;

  /// @brief Field numberNegativePattern, offset: 0xbc, size: 0x4, def value: None
  int32_t ___numberNegativePattern;

  /// @brief Field percentPositivePattern, offset: 0xc0, size: 0x4, def value: None
  int32_t ___percentPositivePattern;

  /// @brief Field percentNegativePattern, offset: 0xc4, size: 0x4, def value: None
  int32_t ___percentNegativePattern;

  /// @brief Field percentDecimalDigits, offset: 0xc8, size: 0x4, def value: None
  int32_t ___percentDecimalDigits;

  /// @brief Field digitSubstitution, offset: 0xcc, size: 0x4, def value: None
  int32_t ___digitSubstitution;

  /// @brief Field isReadOnly, offset: 0xd0, size: 0x1, def value: None
  bool ___isReadOnly;

  /// @brief Field m_useUserOverride, offset: 0xd1, size: 0x1, def value: None
  bool ___m_useUserOverride;

  /// @brief Field m_isInvariant, offset: 0xd2, size: 0x1, def value: None
  bool ___m_isInvariant;

  /// @brief Field validForParseAsNumber, offset: 0xd3, size: 0x1, def value: None
  bool ___validForParseAsNumber;

  /// @brief Field validForParseAsCurrency, offset: 0xd4, size: 0x1, def value: None
  bool ___validForParseAsCurrency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___numberGroupSizes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyGroupSizes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentGroupSizes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___positiveSign) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___negativeSign) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___numberDecimalSeparator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___numberGroupSeparator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyGroupSeparator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyDecimalSeparator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencySymbol) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___ansiCurrencySymbol) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___nanSymbol) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___positiveInfinitySymbol) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___negativeInfinitySymbol) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentDecimalSeparator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentGroupSeparator) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentSymbol) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___perMilleSymbol) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___nativeDigits) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___m_dataItem) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___numberDecimalDigits) == 0xac, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyDecimalDigits) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyPositivePattern) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___currencyNegativePattern) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___numberNegativePattern) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentPositivePattern) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentNegativePattern) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___percentDecimalDigits) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___digitSubstitution) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___isReadOnly) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___m_useUserOverride) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___m_isInvariant) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___validForParseAsNumber) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::NumberFormatInfo, ___validForParseAsCurrency) == 0xd4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::NumberFormatInfo, 0xd8>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::NumberFormatInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::NumberFormatInfo*, "System.Globalization", "NumberFormatInfo");
