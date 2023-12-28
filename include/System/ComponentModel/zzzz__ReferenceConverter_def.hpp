#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceConverter)
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
class __ReferenceConverter__ReferenceComparer;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections {
class IComparer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9448))
// CS Name: ::ReferenceConverter::ReferenceComparer*
class CORDL_TYPE __ReferenceConverter__ReferenceComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _converter, offset 0x10, size 0x8
  __declspec(property(get = __get__converter, put = __set__converter))::System::ComponentModel::ReferenceConverter* _converter;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  constexpr ::System::ComponentModel::ReferenceConverter*& __get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReferenceConverter*> const& __get__converter() const;

  constexpr void __set__converter(::System::ComponentModel::ReferenceConverter* value);

  static inline ::System::ComponentModel::__ReferenceConverter__ReferenceComparer* New_ctor(::System::ComponentModel::ReferenceConverter* converter);

  /// @brief Method .ctor addr 0x2916934 size 0x28 virtual false final false
  inline void _ctor(::System::ComponentModel::ReferenceConverter* converter);

  /// @brief Method Compare addr 0x2916a84 size 0xb0 virtual true final true
  inline int32_t Compare(::System::Object* item1, ::System::Object* item2);

  // Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReferenceConverter__ReferenceComparer();

public:
  /// @brief Field _converter, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ReferenceConverter* ____converter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__ReferenceConverter__ReferenceComparer, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::ReferenceConverter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9449))
// CS Name: ::System.ComponentModel::ReferenceConverter*
class CORDL_TYPE ReferenceConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using ReferenceComparer = ::System::ComponentModel::__ReferenceConverter__ReferenceComparer;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __get__type, put = __set__type))::System::Type* _type;

  /// @brief Field s_none, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_none, put = setStaticF_s_none))::StringW s_none;

  constexpr ::System::Type*& __get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__type() const;

  constexpr void __set__type(::System::Type* value);

  static inline void setStaticF_s_none(::StringW value);

  static inline ::StringW getStaticF_s_none();

  static inline ::System::ComponentModel::ReferenceConverter* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x29155b4 size 0x28 virtual false final false
  inline void _ctor(::System::Type* type);

  /// @brief Method CanConvertFrom addr 0x29155e4 size 0xb0 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method ConvertFrom addr 0x291571c size 0x338 virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x2915ac0 size 0x44c virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  /// @brief Method GetStandardValues addr 0x2916144 size 0x7f0 virtual true final false
  inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesExclusive addr 0x2916a0c size 0x8 virtual true final false
  inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method GetStandardValuesSupported addr 0x2916a14 size 0x8 virtual true final false
  inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);

  /// @brief Method IsValueAllowed addr 0x2916a1c size 0x8 virtual true final false
  inline bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceConverter(ReferenceConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceConverter(ReferenceConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceConverter();

public:
  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReferenceConverter, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
NEED_NO_BOX(::System::ComponentModel::__ReferenceConverter__ReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__ReferenceConverter__ReferenceComparer*, "System.ComponentModel", "ReferenceConverter/ReferenceComparer");
