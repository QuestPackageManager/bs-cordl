#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlQualifiedName)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class __XmlQualifiedName__HashCodeOfStringDelegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class __XmlQualifiedName__HashCodeOfStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlQualifiedName);
MARK_REF_PTR_T(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate);
// Type: ::HashCodeOfStringDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11470))
// CS Name: ::XmlQualifiedName::HashCodeOfStringDelegate*
class CORDL_TYPE __XmlQualifiedName__HashCodeOfStringDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28ac5dc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x28ac920, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlQualifiedName__HashCodeOfStringDelegate(__XmlQualifiedName__HashCodeOfStringDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlQualifiedName__HashCodeOfStringDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlQualifiedName__HashCodeOfStringDelegate(__XmlQualifiedName__HashCodeOfStringDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlQualifiedName__HashCodeOfStringDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlQualifiedName
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11471))
// CS Name: ::System.Xml::XmlQualifiedName*
class CORDL_TYPE XmlQualifiedName : public ::System::Object {
public:
  // Declarations
  using HashCodeOfStringDelegate = ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Field hash, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash)) int32_t hash;

  /// @brief Field hashCodeDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hashCodeDelegate, put = setStaticF_hashCodeDelegate))::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* hashCodeDelegate;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::XmlQualifiedName* Empty;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr int32_t& __cordl_internal_get_hash();

  constexpr int32_t const& __cordl_internal_get_hash() const;

  constexpr void __cordl_internal_set_hash(int32_t value);

  static inline void setStaticF_hashCodeDelegate(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* value);

  static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* getStaticF_hashCodeDelegate();

  static inline void setStaticF_Empty(::System::Xml::XmlQualifiedName* value);

  static inline ::System::Xml::XmlQualifiedName* getStaticF_Empty();

  static inline ::System::Xml::XmlQualifiedName* New_ctor();

  /// @brief Method .ctor, addr 0x28abfd8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x28ac0b8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::System::Xml::XmlQualifiedName* New_ctor(::StringW name, ::StringW ns);

  /// @brief Method .ctor, addr 0x28ac02c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW ns);

  /// @brief Method get_Namespace, addr 0x28ac118, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_Name, addr 0x28ac120, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method GetHashCode, addr 0x28ac128, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_IsEmpty, addr 0x28ac370, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method ToString, addr 0x28ac3ac, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Equals, addr 0x28ac41c, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method op_Equality, addr 0x28ac56c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b);

  /// @brief Method op_Inequality, addr 0x28ac4fc, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b);

  /// @brief Method GetHashCodeDelegate, addr 0x28ac1f4, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate* GetHashCodeDelegate();

  /// @brief Method IsRandomizedHashingDisabled, addr 0x28ac5d4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsRandomizedHashingDisabled();

  /// @brief Method GetHashCodeOfString, addr 0x28ac6b4, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetHashCodeOfString(::StringW s, int32_t length, int64_t additionalEntropy);

  /// @brief Method Init, addr 0x28ac6d0, size 0xc, virtual false, abstract: false, final false
  inline void Init(::StringW name, ::StringW ns);

  /// @brief Method Parse, addr 0x28ac6dc, size 0x1b4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* Parse(::StringW s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::StringW> prefix);

  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlQualifiedName(XmlQualifiedName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlQualifiedName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlQualifiedName(XmlQualifiedName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlQualifiedName();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field hash, offset: 0x20, size: 0x4, def value: None
  int32_t ___hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlQualifiedName, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlQualifiedName, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlQualifiedName, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlQualifiedName, ___hash) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlQualifiedName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlQualifiedName*, "System.Xml", "XmlQualifiedName");
NEED_NO_BOX(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlQualifiedName__HashCodeOfStringDelegate*, "System.Xml", "XmlQualifiedName/HashCodeOfStringDelegate");
