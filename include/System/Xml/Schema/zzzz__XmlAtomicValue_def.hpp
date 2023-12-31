#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlAtomicValue_def.hpp"
#include "System/Xml/XPath/zzzz__XPathItem_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAtomicValue)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class __XmlAtomicValue__NamespacePrefixForQName;
}
namespace System::Xml::Schema {
struct __XmlAtomicValue__Union;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTime;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAtomicValue;
}
namespace System::Xml::Schema {
class __XmlAtomicValue__NamespacePrefixForQName;
}
namespace System::Xml::Schema {
struct __XmlAtomicValue__Union;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlAtomicValue);
MARK_REF_PTR_T(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName);
MARK_VAL_T(::System::Xml::Schema::__XmlAtomicValue__Union);
// Type: ::Union
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(0) }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11711))
// CS Name: ::XmlAtomicValue::Union
#pragma pack(push, 0)
struct CORDL_TYPE __XmlAtomicValue__Union {
public:
  // Declarations
  /// @brief Field boolVal, offset 0x0, size 0x1
  __declspec(property(get = __get_boolVal, put = __set_boolVal)) bool boolVal;

  /// @brief Field dblVal, offset 0x0, size 0x8
  __declspec(property(get = __get_dblVal, put = __set_dblVal)) double_t dblVal;

  /// @brief Field i64Val, offset 0x0, size 0x8
  __declspec(property(get = __get_i64Val, put = __set_i64Val)) int64_t i64Val;

  /// @brief Field i32Val, offset 0x0, size 0x4
  __declspec(property(get = __get_i32Val, put = __set_i32Val)) int32_t i32Val;

  /// @brief Field dtVal, offset 0x0, size 0x8
  __declspec(property(get = __get_dtVal, put = __set_dtVal))::System::DateTime dtVal;

  constexpr bool& __get_boolVal();

  constexpr bool const& __get_boolVal() const;

  constexpr void __set_boolVal(bool value);

  constexpr double_t& __get_dblVal();

  constexpr double_t const& __get_dblVal() const;

  constexpr void __set_dblVal(double_t value);

  constexpr int64_t& __get_i64Val();

  constexpr int64_t const& __get_i64Val() const;

  constexpr void __set_i64Val(int64_t value);

  constexpr int32_t& __get_i32Val();

  constexpr int32_t const& __get_i32Val() const;

  constexpr void __set_i32Val(int32_t value);

  constexpr ::System::DateTime& __get_dtVal();

  constexpr ::System::DateTime const& __get_dtVal() const;

  constexpr void __set_dtVal(::System::DateTime value);

  // Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "i64Val",
  // ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dtVal", ty: "::System::DateTime", modifiers: "",
  // def_value: None }]
  constexpr __XmlAtomicValue__Union(bool boolVal, double_t dblVal, int64_t i64Val, int32_t i32Val, ::System::DateTime dtVal) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlAtomicValue__Union();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___boolVal_padding[0x0];
      /// @brief Field boolVal, offset: 0x0, size: 0x1, def value: None
      bool ___boolVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___boolVal_padding_forAlignment[0x0];
      /// @brief Field boolVal, offset: 0x0, size: 0x1, def value: None
      bool ___boolVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___dblVal_padding[0x0];
      /// @brief Field dblVal, offset: 0x0, size: 0x8, def value: None
      double_t ___dblVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___dblVal_padding_forAlignment[0x0];
      /// @brief Field dblVal, offset: 0x0, size: 0x8, def value: None
      double_t ___dblVal_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___i64Val_padding[0x0];
      /// @brief Field i64Val, offset: 0x0, size: 0x8, def value: None
      int64_t ___i64Val;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___i64Val_padding_forAlignment[0x0];
      /// @brief Field i64Val, offset: 0x0, size: 0x8, def value: None
      int64_t ___i64Val_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___i32Val_padding[0x0];
      /// @brief Field i32Val, offset: 0x0, size: 0x4, def value: None
      int32_t ___i32Val;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___i32Val_padding_forAlignment[0x0];
      /// @brief Field i32Val, offset: 0x0, size: 0x4, def value: None
      int32_t ___i32Val_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___dtVal_padding[0x0];
      /// @brief Field dtVal, offset: 0x0, size: 0x8, def value: None
      ::System::DateTime ___dtVal;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___dtVal_padding_forAlignment[0x0];
      /// @brief Field dtVal, offset: 0x0, size: 0x8, def value: None
      ::System::DateTime ___dtVal_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlAtomicValue__Union, 0x8>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::NamespacePrefixForQName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11712))
// CS Name: ::XmlAtomicValue::NamespacePrefixForQName*
class CORDL_TYPE __XmlAtomicValue__NamespacePrefixForQName : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __get_ns, put = __set_ns))::StringW ns;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  constexpr ::StringW& __get_ns();

  constexpr ::StringW const& __get_ns() const;

  constexpr void __set_ns(::StringW value);

  static inline ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* New_ctor(::StringW prefix, ::StringW ns);

  /// @brief Method .ctor, addr 0x28c63c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW ns);

  /// @brief Method LookupNamespace, addr 0x28c7064, size 0x34, virtual true, abstract: false, final true
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x28c7098, size 0x2c, virtual true, abstract: false, final true
  inline ::StringW LookupPrefix(::StringW namespaceName);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlAtomicValue__NamespacePrefixForQName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlAtomicValue__NamespacePrefixForQName(__XmlAtomicValue__NamespacePrefixForQName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlAtomicValue__NamespacePrefixForQName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlAtomicValue__NamespacePrefixForQName(__XmlAtomicValue__NamespacePrefixForQName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlAtomicValue__NamespacePrefixForQName();

public:
  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName, ___ns) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XmlAtomicValue
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11580)), TypeDefinitionIndex(TypeDefinitionIndex(2496)), TypeDefinitionIndex(TypeDefinitionIndex(11711))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11713))
// CS Name: ::System.Xml.Schema::XmlAtomicValue*
class CORDL_TYPE XmlAtomicValue : public ::System::Xml::XPath::XPathItem {
public:
  // Declarations
  using NamespacePrefixForQName = ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName;

  using Union = ::System::Xml::Schema::__XmlAtomicValue__Union;

  /// @brief Field xmlType, offset 0x10, size 0x8
  __declspec(property(get = __get_xmlType, put = __set_xmlType))::System::Xml::Schema::XmlSchemaType* xmlType;

  /// @brief Field objVal, offset 0x18, size 0x8
  __declspec(property(get = __get_objVal, put = __set_objVal))::System::Object* objVal;

  /// @brief Field clrType, offset 0x20, size 0x4
  __declspec(property(get = __get_clrType, put = __set_clrType))::System::TypeCode clrType;

  /// @brief Field unionVal, offset 0x28, size 0x8
  __declspec(property(get = __get_unionVal, put = __set_unionVal))::System::Xml::Schema::__XmlAtomicValue__Union unionVal;

  /// @brief Field nsPrefix, offset 0x30, size 0x8
  __declspec(property(get = __get_nsPrefix, put = __set_nsPrefix))::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* nsPrefix;

  __declspec(property(get = get_XmlType))::System::Xml::Schema::XmlSchemaType* XmlType;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_TypedValue))::System::Object* TypedValue;

  __declspec(property(get = get_ValueAsBoolean)) bool ValueAsBoolean;

  __declspec(property(get = get_ValueAsDateTime))::System::DateTime ValueAsDateTime;

  __declspec(property(get = get_ValueAsDouble)) double_t ValueAsDouble;

  __declspec(property(get = get_ValueAsInt)) int32_t ValueAsInt;

  __declspec(property(get = get_ValueAsLong)) int64_t ValueAsLong;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __get_xmlType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __get_xmlType() const;

  constexpr void __set_xmlType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr ::System::Object*& __get_objVal();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_objVal() const;

  constexpr void __set_objVal(::System::Object* value);

  constexpr ::System::TypeCode& __get_clrType();

  constexpr ::System::TypeCode const& __get_clrType() const;

  constexpr void __set_clrType(::System::TypeCode value);

  constexpr ::System::Xml::Schema::__XmlAtomicValue__Union& __get_unionVal();

  constexpr ::System::Xml::Schema::__XmlAtomicValue__Union const& __get_unionVal() const;

  constexpr void __set_unionVal(::System::Xml::Schema::__XmlAtomicValue__Union value);

  constexpr ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*& __get_nsPrefix();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*> const& __get_nsPrefix() const;

  constexpr void __set_nsPrefix(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, bool value);

  /// @brief Method .ctor, addr 0x28c5d44, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, bool value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value);

  /// @brief Method .ctor, addr 0x28c5dd0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, double_t value);

  /// @brief Method .ctor, addr 0x28c5e58, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, double_t value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value);

  /// @brief Method .ctor, addr 0x28c5ee8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value);

  /// @brief Method .ctor, addr 0x28c5f70, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value);

  /// @brief Method .ctor, addr 0x28c5ff8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method .ctor, addr 0x28c609c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value);

  /// @brief Method .ctor, addr 0x28c63f4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value);

  static inline ::System::Xml::Schema::XmlAtomicValue* New_ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method .ctor, addr 0x28c6498, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method System.ICloneable.Clone, addr 0x28c6688, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method get_XmlType, addr 0x28c668c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_XmlType();

  /// @brief Method get_ValueType, addr 0x28c6694, size 0x28, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_TypedValue, addr 0x28c66bc, size 0x1c4, virtual true, abstract: false, final false
  inline ::System::Object* get_TypedValue();

  /// @brief Method get_ValueAsBoolean, addr 0x28c68f8, size 0xcc, virtual true, abstract: false, final false
  inline bool get_ValueAsBoolean();

  /// @brief Method get_ValueAsDateTime, addr 0x28c69c4, size 0xe0, virtual true, abstract: false, final false
  inline ::System::DateTime get_ValueAsDateTime();

  /// @brief Method get_ValueAsDouble, addr 0x28c6aa4, size 0xdc, virtual true, abstract: false, final false
  inline double_t get_ValueAsDouble();

  /// @brief Method get_ValueAsInt, addr 0x28c6b80, size 0xd4, virtual true, abstract: false, final false
  inline int32_t get_ValueAsInt();

  /// @brief Method get_ValueAsLong, addr 0x28c6c54, size 0xe0, virtual true, abstract: false, final false
  inline int64_t get_ValueAsLong();

  /// @brief Method ValueAs, addr 0x28c6d34, size 0x230, virtual true, abstract: false, final false
  inline ::System::Object* ValueAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method get_Value, addr 0x28c6f64, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method ToString, addr 0x28c7058, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetPrefixFromQName, addr 0x28c62fc, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetPrefixFromQName(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAtomicValue(XmlAtomicValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAtomicValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAtomicValue(XmlAtomicValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAtomicValue();

public:
  /// @brief Field xmlType, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___xmlType;

  /// @brief Field objVal, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___objVal;

  /// @brief Field clrType, offset: 0x20, size: 0x4, def value: None
  ::System::TypeCode ___clrType;

  /// @brief Field unionVal, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::__XmlAtomicValue__Union ___unionVal;

  /// @brief Field nsPrefix, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName* ___nsPrefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAtomicValue, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlAtomicValue, ___xmlType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlAtomicValue, ___objVal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlAtomicValue, ___clrType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlAtomicValue, ___unionVal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlAtomicValue, ___nsPrefix) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAtomicValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAtomicValue*, "System.Xml.Schema", "XmlAtomicValue");
NEED_NO_BOX(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlAtomicValue__NamespacePrefixForQName*, "System.Xml.Schema", "XmlAtomicValue/NamespacePrefixForQName");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlAtomicValue__Union, "System.Xml.Schema", "XmlAtomicValue/Union");
