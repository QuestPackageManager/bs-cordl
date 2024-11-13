#pragma once
// IWYU pragma private; include "System/ComponentModel/CultureInfoConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureInfoConverter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IComparer;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class __CultureInfoConverter__CultureComparer;
}
namespace System::ComponentModel {
class __CultureInfoConverter__CultureInfoMapper;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::CultureInfoConverter::CultureComparer*
class CORDL_TYPE __CultureInfoConverter__CultureComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _converter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__converter, put = __cordl_internal_set__converter)) ::System::ComponentModel::CultureInfoConverter* _converter;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x43e9118, size 0x16c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* item1, ::System::Object* item2);

  static inline ::System::ComponentModel::__CultureInfoConverter__CultureComparer* New_ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter);

  constexpr ::System::ComponentModel::CultureInfoConverter*& __cordl_internal_get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CultureInfoConverter*> const& __cordl_internal_get__converter() const;

  constexpr void __cordl_internal_set__converter(::System::ComponentModel::CultureInfoConverter* value);

  /// @brief Method .ctor, addr 0x43e90d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter);

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfoConverter__CultureComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CultureInfoConverter__CultureComparer(__CultureInfoConverter__CultureComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CultureInfoConverter__CultureComparer(__CultureInfoConverter__CultureComparer const&) = delete;

  /// @brief Field _converter, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::CultureInfoConverter* ____converter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__CultureInfoConverter__CultureComparer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__CultureInfoConverter__CultureComparer, ____converter) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::CultureInfoMapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::CultureInfoConverter::CultureInfoMapper*
class CORDL_TYPE __CultureInfoConverter__CultureInfoMapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_cultureInfoNameMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cultureInfoNameMap, put = setStaticF_s_cultureInfoNameMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_cultureInfoNameMap;

  /// @brief Method CreateMap, addr 0x43e9284, size 0x40e0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateMap();

  /// @brief Method GetCultureInfoName, addr 0x43e89ec, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetCultureInfoName(::StringW cultureInfoDisplayName);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_cultureInfoNameMap();

  static inline void setStaticF_s_cultureInfoNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CultureInfoConverter__CultureInfoMapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureInfoMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CultureInfoConverter__CultureInfoMapper(__CultureInfoConverter__CultureInfoMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CultureInfoConverter__CultureInfoMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CultureInfoConverter__CultureInfoMapper(__CultureInfoConverter__CultureInfoMapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::CultureInfoConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CultureInfoConverter*
class CORDL_TYPE CultureInfoConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using CultureComparer = ::System::ComponentModel::__CultureInfoConverter__CultureComparer;

  using CultureInfoMapper = ::System::ComponentModel::__CultureInfoConverter__CultureInfoMapper;

  __declspec(property(get = get_DefaultCultureString)) ::StringW DefaultCultureString;

  /// @brief Field _values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::System::ComponentModel::__TypeConverter__StandardValuesCollection* _values;

  /// @brief Method CanConvertFrom, addr 0x43e7f48, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo, addr 0x43e8010, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom, addr 0x43e80d8, size 0x914, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x43e8a8c, size 0x46c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetCultureName, addr 0x43e7f24, size 0x24, virtual true, abstract: false, final false
  inline ::StringW GetCultureName(::System::Globalization::CultureInfo* culture);

  /// @brief Method GetStandardValues, addr 0x43e8ef8, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x43e9100, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x43e9108, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  static inline ::System::ComponentModel::CultureInfoConverter* New_ctor();

  constexpr ::System::ComponentModel::__TypeConverter__StandardValuesCollection*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeConverter__StandardValuesCollection*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__values(::System::ComponentModel::__TypeConverter__StandardValuesCollection* value);

  /// @brief Method .ctor, addr 0x43e9110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultCultureString, addr 0x43e7ee4, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_DefaultCultureString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureInfoConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureInfoConverter(CultureInfoConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureInfoConverter(CultureInfoConverter const&) = delete;

  /// @brief Field _values, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__TypeConverter__StandardValuesCollection* ____values;

  /// @brief Field DefaultInvariantCultureString offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultInvariantCultureString{ u"(Default)" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9344 };

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
