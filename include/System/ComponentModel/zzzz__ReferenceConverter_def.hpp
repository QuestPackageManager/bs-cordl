#pragma once
// IWYU pragma private; include "System/ComponentModel/ReferenceConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceConverter)
namespace System::Collections {
class IComparer;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class __ReferenceConverter__ReferenceComparer;
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
class ReferenceConverter;
}
namespace System::ComponentModel {
class __ReferenceConverter__ReferenceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReferenceConverter);
MARK_REF_PTR_T(::System::ComponentModel::__ReferenceConverter__ReferenceComparer);
// Type: ::ReferenceComparer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::ReferenceConverter::ReferenceComparer*
class CORDL_TYPE __ReferenceConverter__ReferenceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _converter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__converter, put = __cordl_internal_set__converter))::System::ComponentModel::ReferenceConverter* _converter;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x2f73794, size 0xb0, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* item1, ::System::Object* item2);

  static inline ::System::ComponentModel::__ReferenceConverter__ReferenceComparer* New_ctor(::System::ComponentModel::ReferenceConverter* converter);

  constexpr ::System::ComponentModel::ReferenceConverter*& __cordl_internal_get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReferenceConverter*> const& __cordl_internal_get__converter() const;

  constexpr void __cordl_internal_set__converter(::System::ComponentModel::ReferenceConverter* value);

  /// @brief Method .ctor, addr 0x2f73644, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ReferenceConverter* converter);

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReferenceConverter__ReferenceComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer const&) = delete;

  /// @brief Field _converter, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ReferenceConverter* ____converter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__ReferenceConverter__ReferenceComparer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__ReferenceConverter__ReferenceComparer, ____converter) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::ReferenceConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ReferenceConverter*
class CORDL_TYPE ReferenceConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using ReferenceComparer = ::System::ComponentModel::__ReferenceConverter__ReferenceComparer;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Type* _type;

  /// @brief Field s_none, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_none, put = setStaticF_s_none))::StringW s_none;

  /// @brief Method CanConvertFrom, addr 0x2f722f4, size 0xb0, virtual true, abstract: false, final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom, addr 0x2f7242c, size 0x338, virtual true, abstract: false, final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo, addr 0x2f727d0, size 0x44c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues, addr 0x2f72e54, size 0x7f0, virtual true, abstract: false, final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive, addr 0x2f7371c, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported, addr 0x2f73724, size 0x8, virtual true, abstract: false, final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValueAllowed, addr 0x2f7372c, size 0x8, virtual true, abstract: false, final false
  inline bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  static inline ::System::ComponentModel::ReferenceConverter* New_ctor(::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type() const;

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2f722c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::StringW getStaticF_s_none();

  static inline void setStaticF_s_none(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceConverter(ReferenceConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceConverter(ReferenceConverter const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReferenceConverter, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ReferenceConverter, ____type) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
NEED_NO_BOX(::System::ComponentModel::__ReferenceConverter__ReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__ReferenceConverter__ReferenceComparer*, "System.ComponentModel", "ReferenceConverter/ReferenceComparer");
