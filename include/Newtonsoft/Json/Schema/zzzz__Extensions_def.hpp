#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json::Schema {
class ValidationEventArgs;
}
namespace Newtonsoft::Json::Schema {
class ValidationEventHandler;
}
namespace Newtonsoft::Json::Schema {
class __Extensions____c__DisplayClass0_0;
}
namespace Newtonsoft::Json::Schema {
class __Extensions____c__DisplayClass1_0;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class Extensions;
}
namespace Newtonsoft::Json::Schema {
class __Extensions____c__DisplayClass0_0;
}
namespace Newtonsoft::Json::Schema {
class __Extensions____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::Extensions);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Extensions::<>c__DisplayClass0_0*
class CORDL_TYPE __Extensions____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field valid, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_valid, put = __cordl_internal_set_valid)) bool valid;

  static inline ::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0* New_ctor();

  /// @brief Method <IsValid>b__0, addr 0x2947f24, size 0x8, virtual false, abstract: false, final false
  inline void _IsValid_b__0(::System::Object* sender, ::Newtonsoft::Json::Schema::ValidationEventArgs* args);

  constexpr bool const& __cordl_internal_get_valid() const;

  constexpr bool& __cordl_internal_get_valid();

  constexpr void __cordl_internal_set_valid(bool value);

  /// @brief Method .ctor, addr 0x2947a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__DisplayClass0_0(__Extensions____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__DisplayClass0_0(__Extensions____c__DisplayClass0_0 const&) = delete;

  /// @brief Field valid, offset: 0x10, size: 0x1, def value: None
  bool ___valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0, ___valid) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Extensions::<>c__DisplayClass1_0*
class CORDL_TYPE __Extensions____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field errors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_errors, put = __cordl_internal_set_errors))::System::Collections::Generic::IList_1<::StringW>* errors;

  static inline ::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0* New_ctor();

  /// @brief Method <IsValid>b__0, addr 0x2947f2c, size 0xc8, virtual false, abstract: false, final false
  inline void _IsValid_b__0(::System::Object* sender, ::Newtonsoft::Json::Schema::ValidationEventArgs* args);

  constexpr ::System::Collections::Generic::IList_1<::StringW>*& __cordl_internal_get_errors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::StringW>*> const& __cordl_internal_get_errors() const;

  constexpr void __cordl_internal_set_errors(::System::Collections::Generic::IList_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2947f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extensions____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extensions____c__DisplayClass1_0(__Extensions____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extensions____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extensions____c__DisplayClass1_0(__Extensions____c__DisplayClass1_0 const&) = delete;

  /// @brief Field errors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::StringW>* ___errors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0, ___errors) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
// Type: Newtonsoft.Json.Schema::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0;

  /// @brief Method IsValid, addr 0x2947954, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsValid(::Newtonsoft::Json::Linq::JToken* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method IsValid, addr 0x2947d88, size 0x18c, virtual false, abstract: false, final false
  static inline bool IsValid(::Newtonsoft::Json::Linq::JToken* source, ::Newtonsoft::Json::Schema::JsonSchema* schema, ByRef<::System::Collections::Generic::IList_1<::StringW>*> errorMessages);

  /// @brief Method Validate, addr 0x2947f1c, size 0x8, virtual false, abstract: false, final false
  static inline void Validate(::Newtonsoft::Json::Linq::JToken* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method Validate, addr 0x2947b54, size 0x234, virtual false, abstract: false, final false
  static inline void Validate(::Newtonsoft::Json::Linq::JToken* source, ::Newtonsoft::Json::Schema::JsonSchema* schema, ::Newtonsoft::Json::Schema::ValidationEventHandler* validationEventHandler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::Extensions, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::Extensions*, "Newtonsoft.Json.Schema", "Extensions");
NEED_NO_BOX(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass0_0*, "Newtonsoft.Json.Schema", "Extensions/<>c__DisplayClass0_0");
NEED_NO_BOX(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::__Extensions____c__DisplayClass1_0*, "Newtonsoft.Json.Schema", "Extensions/<>c__DisplayClass1_0");
