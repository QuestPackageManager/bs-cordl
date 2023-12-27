#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NumberFormatInfo)
namespace System {
class Type;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Globalization {
class CultureData;
}
namespace System {
class IFormatProvider;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Globalization {
class NumberFormatInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::NumberFormatInfo);
// Type: System.Globalization::NumberFormatInfo
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 213, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3679)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3704))
// CS Name: ::System.Globalization::NumberFormatInfo*
class CORDL_TYPE NumberFormatInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field numberGroupSizes, offset 0x10, size 0x8
  __declspec(property(get = __get_numberGroupSizes, put = __set_numberGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> numberGroupSizes;

  /// @brief Field currencyGroupSizes, offset 0x18, size 0x8
  __declspec(property(get = __get_currencyGroupSizes, put = __set_currencyGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> currencyGroupSizes;

  /// @brief Field percentGroupSizes, offset 0x20, size 0x8
  __declspec(property(get = __get_percentGroupSizes, put = __set_percentGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> percentGroupSizes;

  /// @brief Field positiveSign, offset 0x28, size 0x8
  __declspec(property(get = __get_positiveSign, put = __set_positiveSign))::StringW positiveSign;

  /// @brief Field negativeSign, offset 0x30, size 0x8
  __declspec(property(get = __get_negativeSign, put = __set_negativeSign))::StringW negativeSign;

  /// @brief Field numberDecimalSeparator, offset 0x38, size 0x8
  __declspec(property(get = __get_numberDecimalSeparator, put = __set_numberDecimalSeparator))::StringW numberDecimalSeparator;

  /// @brief Field numberGroupSeparator, offset 0x40, size 0x8
  __declspec(property(get = __get_numberGroupSeparator, put = __set_numberGroupSeparator))::StringW numberGroupSeparator;

  /// @brief Field currencyGroupSeparator, offset 0x48, size 0x8
  __declspec(property(get = __get_currencyGroupSeparator, put = __set_currencyGroupSeparator))::StringW currencyGroupSeparator;

  /// @brief Field currencyDecimalSeparator, offset 0x50, size 0x8
  __declspec(property(get = __get_currencyDecimalSeparator, put = __set_currencyDecimalSeparator))::StringW currencyDecimalSeparator;

  /// @brief Field currencySymbol, offset 0x58, size 0x8
  __declspec(property(get = __get_currencySymbol, put = __set_currencySymbol))::StringW currencySymbol;

  /// @brief Field ansiCurrencySymbol, offset 0x60, size 0x8
  __declspec(property(get = __get_ansiCurrencySymbol, put = __set_ansiCurrencySymbol))::StringW ansiCurrencySymbol;

  /// @brief Field nanSymbol, offset 0x68, size 0x8
  __declspec(property(get = __get_nanSymbol, put = __set_nanSymbol))::StringW nanSymbol;

  /// @brief Field positiveInfinitySymbol, offset 0x70, size 0x8
  __declspec(property(get = __get_positiveInfinitySymbol, put = __set_positiveInfinitySymbol))::StringW positiveInfinitySymbol;

  /// @brief Field negativeInfinitySymbol, offset 0x78, size 0x8
  __declspec(property(get = __get_negativeInfinitySymbol, put = __set_negativeInfinitySymbol))::StringW negativeInfinitySymbol;

  /// @brief Field percentDecimalSeparator, offset 0x80, size 0x8
  __declspec(property(get = __get_percentDecimalSeparator, put = __set_percentDecimalSeparator))::StringW percentDecimalSeparator;

  /// @brief Field percentGroupSeparator, offset 0x88, size 0x8
  __declspec(property(get = __get_percentGroupSeparator, put = __set_percentGroupSeparator))::StringW percentGroupSeparator;

  /// @brief Field percentSymbol, offset 0x90, size 0x8
  __declspec(property(get = __get_percentSymbol, put = __set_percentSymbol))::StringW percentSymbol;

  /// @brief Field perMilleSymbol, offset 0x98, size 0x8
  __declspec(property(get = __get_perMilleSymbol, put = __set_perMilleSymbol))::StringW perMilleSymbol;

  /// @brief Field nativeDigits, offset 0xa0, size 0x8
  __declspec(property(get = __get_nativeDigits, put = __set_nativeDigits))::ArrayW<::StringW, ::Array<::StringW>*> nativeDigits;

  /// @brief Field m_dataItem, offset 0xa8, size 0x4
  __declspec(property(get = __get_m_dataItem, put = __set_m_dataItem)) int32_t m_dataItem;

  /// @brief Field numberDecimalDigits, offset 0xac, size 0x4
  __declspec(property(get = __get_numberDecimalDigits, put = __set_numberDecimalDigits)) int32_t numberDecimalDigits;

  /// @brief Field currencyDecimalDigits, offset 0xb0, size 0x4
  __declspec(property(get = __get_currencyDecimalDigits, put = __set_currencyDecimalDigits)) int32_t currencyDecimalDigits;

  /// @brief Field currencyPositivePattern, offset 0xb4, size 0x4
  __declspec(property(get = __get_currencyPositivePattern, put = __set_currencyPositivePattern)) int32_t currencyPositivePattern;

  /// @brief Field currencyNegativePattern, offset 0xb8, size 0x4
  __declspec(property(get = __get_currencyNegativePattern, put = __set_currencyNegativePattern)) int32_t currencyNegativePattern;

  /// @brief Field numberNegativePattern, offset 0xbc, size 0x4
  __declspec(property(get = __get_numberNegativePattern, put = __set_numberNegativePattern)) int32_t numberNegativePattern;

  /// @brief Field percentPositivePattern, offset 0xc0, size 0x4
  __declspec(property(get = __get_percentPositivePattern, put = __set_percentPositivePattern)) int32_t percentPositivePattern;

  /// @brief Field percentNegativePattern, offset 0xc4, size 0x4
  __declspec(property(get = __get_percentNegativePattern, put = __set_percentNegativePattern)) int32_t percentNegativePattern;

  /// @brief Field percentDecimalDigits, offset 0xc8, size 0x4
  __declspec(property(get = __get_percentDecimalDigits, put = __set_percentDecimalDigits)) int32_t percentDecimalDigits;

  /// @brief Field digitSubstitution, offset 0xcc, size 0x4
  __declspec(property(get = __get_digitSubstitution, put = __set_digitSubstitution)) int32_t digitSubstitution;

  /// @brief Field isReadOnly, offset 0xd0, size 0x1
  __declspec(property(get = __get_isReadOnly, put = __set_isReadOnly)) bool isReadOnly;

  /// @brief Field m_useUserOverride, offset 0xd1, size 0x1
  __declspec(property(get = __get_m_useUserOverride, put = __set_m_useUserOverride)) bool m_useUserOverride;

  /// @brief Field m_isInvariant, offset 0xd2, size 0x1
  __declspec(property(get = __get_m_isInvariant, put = __set_m_isInvariant)) bool m_isInvariant;

  /// @brief Field validForParseAsNumber, offset 0xd3, size 0x1
  __declspec(property(get = __get_validForParseAsNumber, put = __set_validForParseAsNumber)) bool validForParseAsNumber;

  /// @brief Field validForParseAsCurrency, offset 0xd4, size 0x1
  __declspec(property(get = __get_validForParseAsCurrency, put = __set_validForParseAsCurrency)) bool validForParseAsCurrency;

  /// @brief Field invariantInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invariantInfo, put = setStaticF_invariantInfo))::System::Globalization::NumberFormatInfo* invariantInfo;

  __declspec(property(get = get_CurrencyDecimalDigits)) int32_t CurrencyDecimalDigits;

  __declspec(property(get = get_CurrencyDecimalSeparator))::StringW CurrencyDecimalSeparator;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_CurrencyGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> CurrencyGroupSizes;

  __declspec(property(get = get_NumberGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> NumberGroupSizes;

  __declspec(property(get = get_PercentGroupSizes))::ArrayW<int32_t, ::Array<int32_t>*> PercentGroupSizes;

  __declspec(property(get = get_CurrencyGroupSeparator))::StringW CurrencyGroupSeparator;

  __declspec(property(get = get_CurrencySymbol))::StringW CurrencySymbol;

  __declspec(property(get = get_NaNSymbol, put = set_NaNSymbol))::StringW NaNSymbol;

  __declspec(property(get = get_CurrencyNegativePattern)) int32_t CurrencyNegativePattern;

  __declspec(property(get = get_NumberNegativePattern)) int32_t NumberNegativePattern;

  __declspec(property(get = get_PercentPositivePattern)) int32_t PercentPositivePattern;

  __declspec(property(get = get_PercentNegativePattern)) int32_t PercentNegativePattern;

  __declspec(property(get = get_NegativeInfinitySymbol))::StringW NegativeInfinitySymbol;

  __declspec(property(get = get_NegativeSign))::StringW NegativeSign;

  __declspec(property(get = get_NumberDecimalDigits)) int32_t NumberDecimalDigits;

  __declspec(property(get = get_NumberDecimalSeparator))::StringW NumberDecimalSeparator;

  __declspec(property(get = get_NumberGroupSeparator, put = set_NumberGroupSeparator))::StringW NumberGroupSeparator;

  __declspec(property(get = get_CurrencyPositivePattern)) int32_t CurrencyPositivePattern;

  __declspec(property(get = get_PositiveInfinitySymbol))::StringW PositiveInfinitySymbol;

  __declspec(property(get = get_PositiveSign))::StringW PositiveSign;

  __declspec(property(get = get_PercentDecimalDigits)) int32_t PercentDecimalDigits;

  __declspec(property(get = get_PercentDecimalSeparator))::StringW PercentDecimalSeparator;

  __declspec(property(get = get_PercentGroupSeparator))::StringW PercentGroupSeparator;

  __declspec(property(get = get_PercentSymbol))::StringW PercentSymbol;

  __declspec(property(get = get_PerMilleSymbol))::StringW PerMilleSymbol;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IFormatProvider"
  constexpr operator ::System::IFormatProvider*() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_numberGroupSizes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_numberGroupSizes() const;

  constexpr void __set_numberGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_currencyGroupSizes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_currencyGroupSizes() const;

  constexpr void __set_currencyGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_percentGroupSizes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_percentGroupSizes() const;

  constexpr void __set_percentGroupSizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::StringW& __get_positiveSign();

  constexpr ::StringW const& __get_positiveSign() const;

  constexpr void __set_positiveSign(::StringW value);

  constexpr ::StringW& __get_negativeSign();

  constexpr ::StringW const& __get_negativeSign() const;

  constexpr void __set_negativeSign(::StringW value);

  constexpr ::StringW& __get_numberDecimalSeparator();

  constexpr ::StringW const& __get_numberDecimalSeparator() const;

  constexpr void __set_numberDecimalSeparator(::StringW value);

  constexpr ::StringW& __get_numberGroupSeparator();

  constexpr ::StringW const& __get_numberGroupSeparator() const;

  constexpr void __set_numberGroupSeparator(::StringW value);

  constexpr ::StringW& __get_currencyGroupSeparator();

  constexpr ::StringW const& __get_currencyGroupSeparator() const;

  constexpr void __set_currencyGroupSeparator(::StringW value);

  constexpr ::StringW& __get_currencyDecimalSeparator();

  constexpr ::StringW const& __get_currencyDecimalSeparator() const;

  constexpr void __set_currencyDecimalSeparator(::StringW value);

  constexpr ::StringW& __get_currencySymbol();

  constexpr ::StringW const& __get_currencySymbol() const;

  constexpr void __set_currencySymbol(::StringW value);

  constexpr ::StringW& __get_ansiCurrencySymbol();

  constexpr ::StringW const& __get_ansiCurrencySymbol() const;

  constexpr void __set_ansiCurrencySymbol(::StringW value);

  constexpr ::StringW& __get_nanSymbol();

  constexpr ::StringW const& __get_nanSymbol() const;

  constexpr void __set_nanSymbol(::StringW value);

  constexpr ::StringW& __get_positiveInfinitySymbol();

  constexpr ::StringW const& __get_positiveInfinitySymbol() const;

  constexpr void __set_positiveInfinitySymbol(::StringW value);

  constexpr ::StringW& __get_negativeInfinitySymbol();

  constexpr ::StringW const& __get_negativeInfinitySymbol() const;

  constexpr void __set_negativeInfinitySymbol(::StringW value);

  constexpr ::StringW& __get_percentDecimalSeparator();

  constexpr ::StringW const& __get_percentDecimalSeparator() const;

  constexpr void __set_percentDecimalSeparator(::StringW value);

  constexpr ::StringW& __get_percentGroupSeparator();

  constexpr ::StringW const& __get_percentGroupSeparator() const;

  constexpr void __set_percentGroupSeparator(::StringW value);

  constexpr ::StringW& __get_percentSymbol();

  constexpr ::StringW const& __get_percentSymbol() const;

  constexpr void __set_percentSymbol(::StringW value);

  constexpr ::StringW& __get_perMilleSymbol();

  constexpr ::StringW const& __get_perMilleSymbol() const;

  constexpr void __set_perMilleSymbol(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_nativeDigits();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_nativeDigits() const;

  constexpr void __set_nativeDigits(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_m_dataItem();

  constexpr int32_t const& __get_m_dataItem() const;

  constexpr void __set_m_dataItem(int32_t value);

  constexpr int32_t& __get_numberDecimalDigits();

  constexpr int32_t const& __get_numberDecimalDigits() const;

  constexpr void __set_numberDecimalDigits(int32_t value);

  constexpr int32_t& __get_currencyDecimalDigits();

  constexpr int32_t const& __get_currencyDecimalDigits() const;

  constexpr void __set_currencyDecimalDigits(int32_t value);

  constexpr int32_t& __get_currencyPositivePattern();

  constexpr int32_t const& __get_currencyPositivePattern() const;

  constexpr void __set_currencyPositivePattern(int32_t value);

  constexpr int32_t& __get_currencyNegativePattern();

  constexpr int32_t const& __get_currencyNegativePattern() const;

  constexpr void __set_currencyNegativePattern(int32_t value);

  constexpr int32_t& __get_numberNegativePattern();

  constexpr int32_t const& __get_numberNegativePattern() const;

  constexpr void __set_numberNegativePattern(int32_t value);

  constexpr int32_t& __get_percentPositivePattern();

  constexpr int32_t const& __get_percentPositivePattern() const;

  constexpr void __set_percentPositivePattern(int32_t value);

  constexpr int32_t& __get_percentNegativePattern();

  constexpr int32_t const& __get_percentNegativePattern() const;

  constexpr void __set_percentNegativePattern(int32_t value);

  constexpr int32_t& __get_percentDecimalDigits();

  constexpr int32_t const& __get_percentDecimalDigits() const;

  constexpr void __set_percentDecimalDigits(int32_t value);

  constexpr int32_t& __get_digitSubstitution();

  constexpr int32_t const& __get_digitSubstitution() const;

  constexpr void __set_digitSubstitution(int32_t value);

  constexpr bool& __get_isReadOnly();

  constexpr bool const& __get_isReadOnly() const;

  constexpr void __set_isReadOnly(bool value);

  constexpr bool& __get_m_useUserOverride();

  constexpr bool const& __get_m_useUserOverride() const;

  constexpr void __set_m_useUserOverride(bool value);

  constexpr bool& __get_m_isInvariant();

  constexpr bool const& __get_m_isInvariant() const;

  constexpr void __set_m_isInvariant(bool value);

  constexpr bool& __get_validForParseAsNumber();

  constexpr bool const& __get_validForParseAsNumber() const;

  constexpr void __set_validForParseAsNumber(bool value);

  constexpr bool& __get_validForParseAsCurrency();

  constexpr bool const& __get_validForParseAsCurrency() const;

  constexpr void __set_validForParseAsCurrency(bool value);

  static inline void setStaticF_invariantInfo(::System::Globalization::NumberFormatInfo* value);

  static inline ::System::Globalization::NumberFormatInfo* getStaticF_invariantInfo();

  static inline ::System::Globalization::NumberFormatInfo* New_ctor();

  /// @brief Method .ctor addr 0x2565f00 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method OnSerializing addr 0x256645c size 0x84 virtual false final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing addr 0x25664e0 size 0x4 virtual false final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserialized addr 0x25664e4 size 0x4 virtual false final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method VerifyGroupSeparator addr 0x25664e8 size 0x70 virtual false final false
  static inline void VerifyGroupSeparator(::StringW groupSep, ::StringW propertyName);

  static inline ::System::Globalization::NumberFormatInfo* New_ctor(::System::Globalization::CultureData* cultureData);

  /// @brief Method .ctor addr 0x2565f08 size 0x554 virtual false final false
  inline void _ctor(::System::Globalization::CultureData* cultureData);

  /// @brief Method VerifyWritable addr 0x25666fc size 0x74 virtual false final false
  inline void VerifyWritable();

  /// @brief Method get_InvariantInfo addr 0x2566770 size 0xa4 virtual false final false
  static inline ::System::Globalization::NumberFormatInfo* get_InvariantInfo();

  /// @brief Method GetInstance addr 0x25668e8 size 0x1bc virtual false final false
  static inline ::System::Globalization::NumberFormatInfo* GetInstance(::System::IFormatProvider* formatProvider);

  /// @brief Method Clone addr 0x2566b98 size 0x6c virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method get_CurrencyDecimalDigits addr 0x2566c04 size 0x8 virtual false final false
  inline int32_t get_CurrencyDecimalDigits();

  /// @brief Method get_CurrencyDecimalSeparator addr 0x2566c0c size 0x8 virtual false final false
  inline ::StringW get_CurrencyDecimalSeparator();

  /// @brief Method get_IsReadOnly addr 0x2566c14 size 0x8 virtual false final false
  inline bool get_IsReadOnly();

  /// @brief Method get_CurrencyGroupSizes addr 0x2566c1c size 0x78 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_CurrencyGroupSizes();

  /// @brief Method get_NumberGroupSizes addr 0x2566c94 size 0x78 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_NumberGroupSizes();

  /// @brief Method get_PercentGroupSizes addr 0x2566d0c size 0x78 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_PercentGroupSizes();

  /// @brief Method get_CurrencyGroupSeparator addr 0x2566d84 size 0x8 virtual false final false
  inline ::StringW get_CurrencyGroupSeparator();

  /// @brief Method get_CurrencySymbol addr 0x2566d8c size 0x8 virtual false final false
  inline ::StringW get_CurrencySymbol();

  /// @brief Method get_CurrentInfo addr 0x2566aa4 size 0xf4 virtual false final false
  static inline ::System::Globalization::NumberFormatInfo* get_CurrentInfo();

  /// @brief Method get_NaNSymbol addr 0x2566d94 size 0x8 virtual false final false
  inline ::StringW get_NaNSymbol();

  /// @brief Method set_NaNSymbol addr 0x2566d9c size 0x90 virtual false final false
  inline void set_NaNSymbol(::StringW value);

  /// @brief Method get_CurrencyNegativePattern addr 0x2566e2c size 0x8 virtual false final false
  inline int32_t get_CurrencyNegativePattern();

  /// @brief Method get_NumberNegativePattern addr 0x2566e34 size 0x8 virtual false final false
  inline int32_t get_NumberNegativePattern();

  /// @brief Method get_PercentPositivePattern addr 0x2566e3c size 0x8 virtual false final false
  inline int32_t get_PercentPositivePattern();

  /// @brief Method get_PercentNegativePattern addr 0x2566e44 size 0x8 virtual false final false
  inline int32_t get_PercentNegativePattern();

  /// @brief Method get_NegativeInfinitySymbol addr 0x2566e4c size 0x8 virtual false final false
  inline ::StringW get_NegativeInfinitySymbol();

  /// @brief Method get_NegativeSign addr 0x2566e54 size 0x8 virtual false final false
  inline ::StringW get_NegativeSign();

  /// @brief Method get_NumberDecimalDigits addr 0x2566e5c size 0x8 virtual false final false
  inline int32_t get_NumberDecimalDigits();

  /// @brief Method get_NumberDecimalSeparator addr 0x2566e64 size 0x8 virtual false final false
  inline ::StringW get_NumberDecimalSeparator();

  /// @brief Method get_NumberGroupSeparator addr 0x2566e6c size 0x8 virtual false final false
  inline ::StringW get_NumberGroupSeparator();

  /// @brief Method set_NumberGroupSeparator addr 0x2566e74 size 0x64 virtual false final false
  inline void set_NumberGroupSeparator(::StringW value);

  /// @brief Method get_CurrencyPositivePattern addr 0x2566ed8 size 0x8 virtual false final false
  inline int32_t get_CurrencyPositivePattern();

  /// @brief Method get_PositiveInfinitySymbol addr 0x2566ee0 size 0x8 virtual false final false
  inline ::StringW get_PositiveInfinitySymbol();

  /// @brief Method get_PositiveSign addr 0x2566ee8 size 0x8 virtual false final false
  inline ::StringW get_PositiveSign();

  /// @brief Method get_PercentDecimalDigits addr 0x2566ef0 size 0x8 virtual false final false
  inline int32_t get_PercentDecimalDigits();

  /// @brief Method get_PercentDecimalSeparator addr 0x2566ef8 size 0x8 virtual false final false
  inline ::StringW get_PercentDecimalSeparator();

  /// @brief Method get_PercentGroupSeparator addr 0x2566f00 size 0x8 virtual false final false
  inline ::StringW get_PercentGroupSeparator();

  /// @brief Method get_PercentSymbol addr 0x2566f08 size 0x8 virtual false final false
  inline ::StringW get_PercentSymbol();

  /// @brief Method get_PerMilleSymbol addr 0x2566f10 size 0x8 virtual false final false
  inline ::StringW get_PerMilleSymbol();

  /// @brief Method GetFormat addr 0x2566f18 size 0x98 virtual true final true
  inline ::System::Object* GetFormat(::System::Type* formatType);

  /// @brief Method ReadOnly addr 0x2566814 size 0xd4 virtual false final false
  static inline ::System::Globalization::NumberFormatInfo* ReadOnly(::System::Globalization::NumberFormatInfo* nfi);

  /// @brief Method ValidateParseStyleInteger addr 0x2566fb0 size 0xd8 virtual false final false
  static inline void ValidateParseStyleInteger(::System::Globalization::NumberStyles style);

  /// @brief Method ValidateParseStyleFloatingPoint addr 0x2567088 size 0xcc virtual false final false
  static inline void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles style);

  // Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumberFormatInfo(NumberFormatInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumberFormatInfo(NumberFormatInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberFormatInfo();

public:
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

  /// @brief Field InvalidNumberStyles value: static_cast<int32_t>(0xfffffc00)
  static ::System::Globalization::NumberStyles const InvalidNumberStyles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::NumberFormatInfo, 0xd8>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::NumberFormatInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::NumberFormatInfo*, "System.Globalization", "NumberFormatInfo");
