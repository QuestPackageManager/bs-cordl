#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureInfoConverter)
namespace System::ComponentModel {
class __CultureInfoConverter__CultureInfoMapper;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class __CultureInfoConverter__CultureComparer;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace System::ComponentModel {
class CultureInfoConverter;
}
namespace System::ComponentModel {
class __CultureInfoConverter__CultureComparer;
}
namespace System::ComponentModel {
class __CultureInfoConverter__CultureInfoMapper;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CultureInfoConverter);
MARK_REF_PTR_T(::System::ComponentModel::__CultureInfoConverter__CultureComparer);
MARK_REF_PTR_T(::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper);
// Type: ::CultureComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8248))
// CS Name: ::CultureInfoConverter::CultureComparer*
class CORDL_TYPE __CultureInfoConverter__CultureComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _converter, offset 0x10, size 0x8
  __declspec(property(get = __get__converter, put = __set__converter))::System::ComponentModel::CultureInfoConverter* _converter;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  constexpr ::System::ComponentModel::CultureInfoConverter*& __get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CultureInfoConverter*> const& __get__converter() const;

  constexpr void __set__converter(::System::ComponentModel::CultureInfoConverter* value);

  static inline ::System::ComponentModel::__CultureInfoConverter__CultureComparer* New_ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter);

  /// @brief Method .ctor addr 0x278a934 size 0x28 virtual false final false
  inline void _ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter);

  /// @brief Method Compare addr 0x278a974 size 0x16c virtual true final true
  inline int32_t Compare(::System::Object* item1, ::System::Object* item2);

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CultureInfoConverter__CultureComparer(__CultureInfoConverter__CultureComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CultureInfoConverter__CultureComparer(__CultureInfoConverter__CultureComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfoConverter__CultureComparer();

public:
  /// @brief Field _converter, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::CultureInfoConverter* ____converter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__CultureInfoConverter__CultureComparer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__CultureInfoConverter__CultureComparer, ____converter) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::CultureInfoMapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8249))
// CS Name: ::CultureInfoConverter::CultureInfoMapper*
class CORDL_TYPE __CultureInfoConverter__CultureInfoMapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_cultureInfoNameMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cultureInfoNameMap, put = setStaticF_s_cultureInfoNameMap))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_cultureInfoNameMap;

  static inline void setStaticF_s_cultureInfoNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_cultureInfoNameMap();

  /// @brief Method CreateMap addr 0x278aae0 size 0x40e0 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateMap();

  /// @brief Method GetCultureInfoName addr 0x278a250 size 0xa0 virtual false final false
  static inline ::StringW GetCultureInfoName(::StringW cultureInfoDisplayName);

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureInfoMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CultureInfoConverter__CultureInfoMapper(__CultureInfoConverter__CultureInfoMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureInfoMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CultureInfoConverter__CultureInfoMapper(__CultureInfoConverter__CultureInfoMapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfoConverter__CultureInfoMapper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::CultureInfoConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8317))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8250))
// CS Name: ::System.ComponentModel::CultureInfoConverter*
class CORDL_TYPE CultureInfoConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using CultureInfoMapper = ::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper;

  using CultureComparer = ::System::ComponentModel::__CultureInfoConverter__CultureComparer;

  /// @brief Field _values, offset 0x10, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::System::ComponentModel::__TypeConverter__StandardValuesCollection* _values;

  __declspec(property(get = get_DefaultCultureString))::StringW DefaultCultureString;

  constexpr ::System::ComponentModel::__TypeConverter__StandardValuesCollection*& __get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeConverter__StandardValuesCollection*> const& __get__values() const;

  constexpr void __set__values(::System::ComponentModel::__TypeConverter__StandardValuesCollection* value);

  /// @brief Method get_DefaultCultureString addr 0x2789744 size 0x40 virtual false final false
  inline ::StringW get_DefaultCultureString();

  /// @brief Method GetCultureName addr 0x2789784 size 0x20 virtual true final false
  inline ::StringW GetCultureName(::System::Globalization::CultureInfo* culture);

  /// @brief Method CanConvertFrom addr 0x27897a4 size 0xc8 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x278986c size 0xc8 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom addr 0x2789934 size 0x91c virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x278a2f0 size 0x464 virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues addr 0x278a754 size 0x1e0 virtual true final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive addr 0x278a95c size 0x8 virtual true final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported addr 0x278a964 size 0x8 virtual true final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::CultureInfoConverter* New_ctor();

  /// @brief Method .ctor addr 0x278a96c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureInfoConverter(CultureInfoConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureInfoConverter(CultureInfoConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureInfoConverter();

public:
  /// @brief Field _values, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__TypeConverter__StandardValuesCollection* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CultureInfoConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::CultureInfoConverter, ____values) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CultureInfoConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CultureInfoConverter*, "System.ComponentModel", "CultureInfoConverter");
NEED_NO_BOX(::System::ComponentModel::__CultureInfoConverter__CultureComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__CultureInfoConverter__CultureComparer*, "System.ComponentModel", "CultureInfoConverter/CultureComparer");
NEED_NO_BOX(::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper*, "System.ComponentModel", "CultureInfoConverter/CultureInfoMapper");
