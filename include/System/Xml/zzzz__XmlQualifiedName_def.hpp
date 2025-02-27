#pragma once
// IWYU pragma private; include "System/Xml/XmlQualifiedName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlQualifiedName)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName_HashCodeOfStringDelegate;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlQualifiedName_HashCodeOfStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlQualifiedName);
MARK_REF_PTR_T(::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate);
// Dependencies System.MulticastDelegate
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
class CORDL_TYPE XmlQualifiedName_HashCodeOfStringDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4370c68, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy);

  static inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x43707fc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlQualifiedName_HashCodeOfStringDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName_HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlQualifiedName_HashCodeOfStringDelegate(XmlQualifiedName_HashCodeOfStringDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName_HashCodeOfStringDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlQualifiedName_HashCodeOfStringDelegate(XmlQualifiedName_HashCodeOfStringDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlQualifiedName
class CORDL_TYPE XmlQualifiedName : public ::System::Object {
public:
  // Declarations
  using HashCodeOfStringDelegate = ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Xml::XmlQualifiedName* Empty;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  /// @brief Field hash, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash)) int32_t hash;

  /// @brief Field hashCodeDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hashCodeDelegate, put = setStaticF_hashCodeDelegate)) ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* hashCodeDelegate;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Method Atomize, addr 0x437095c, size 0x54, virtual false, abstract: false, final false
  inline void Atomize(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method Clone, addr 0x4370b60, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* Clone();

  /// @brief Method Equals, addr 0x43705cc, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x43702dc, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCodeDelegate, addr 0x43703a8, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* GetHashCodeDelegate();

  /// @brief Method GetHashCodeOfString, addr 0x437089c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeOfString(::StringW s, int32_t length, int64_t additionalEntropy);

  /// @brief Method Init, addr 0x43708b8, size 0xc, virtual false, abstract: false, final false
  inline void Init(::StringW name, ::StringW ns);

  /// @brief Method IsRandomizedHashingDisabled, addr 0x43707f4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsRandomizedHashingDisabled();

  static inline ::System::Xml::XmlQualifiedName* New_ctor();

  static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW name);

  static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW name, ::StringW ns);

  /// @brief Method Parse, addr 0x43709b0, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* Parse(::StringW s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::StringW> prefix);

  /// @brief Method SetNamespace, addr 0x43708c4, size 0x8, virtual false, abstract: false, final false
  inline void SetNamespace(::StringW ns);

  /// @brief Method ToString, addr 0x437055c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x4370784, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW name, ::StringW ns);

  /// @brief Method Verify, addr 0x43708cc, size 0x90, virtual false, abstract: false, final false
  inline void Verify();

  constexpr int32_t const& __cordl_internal_get_hash() const;

  constexpr int32_t& __cordl_internal_get_hash();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr void __cordl_internal_set_hash(int32_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  /// @brief Method .ctor, addr 0x4370184, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x437026c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x43701d8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW ns);

  static inline ::System::Xml::XmlQualifiedName* getStaticF_Empty();

  static inline ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* getStaticF_hashCodeDelegate();

  /// @brief Method get_IsEmpty, addr 0x4370520, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Name, addr 0x43702d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x43702cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method op_Equality, addr 0x437071c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b);

  /// @brief Method op_Inequality, addr 0x43706ac, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b);

  static inline void setStaticF_Empty(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_hashCodeDelegate(::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlQualifiedName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlQualifiedName(XmlQualifiedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlQualifiedName(XmlQualifiedName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7371 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field hash, offset: 0x20, size: 0x4, def value: None
  int32_t ___hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlQualifiedName, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlQualifiedName, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlQualifiedName, ___hash) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlQualifiedName, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlQualifiedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlQualifiedName*, "System.Xml", "XmlQualifiedName");
NEED_NO_BOX(::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
