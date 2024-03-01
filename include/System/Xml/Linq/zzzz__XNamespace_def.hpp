#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XNamespace)
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1;
}
namespace System::Xml::Linq {
class XName;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Xml::Linq {
class XNamespace;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XNamespace);
// Type: System.Xml.Linq::XNamespace
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::System.Xml.Linq::XNamespace*
class CORDL_TYPE XNamespace : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NamespaceName))::StringW NamespaceName;

  /// @brief Field _hashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Field _names, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__names, put = __cordl_internal_set__names))::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* _names;

  /// @brief Field _namespaceName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__namespaceName, put = __cordl_internal_set__namespaceName))::StringW _namespaceName;

  /// @brief Field s_namespaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_namespaces, put = setStaticF_s_namespaces))::System::Xml::Linq::XHashtable_1<::System::WeakReference*>* s_namespaces;

  /// @brief Field s_refNone, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_refNone, put = setStaticF_s_refNone))::System::WeakReference* s_refNone;

  /// @brief Field s_refXml, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_refXml, put = setStaticF_s_refXml))::System::WeakReference* s_refXml;

  /// @brief Field s_refXmlns, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_refXmlns, put = setStaticF_s_refXmlns))::System::WeakReference* s_refXmlns;

  /// @brief Method EnsureNamespace, addr 0x294945c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* EnsureNamespace(ByRef<::System::WeakReference*> refNmsp, ::StringW namespaceName);

  /// @brief Method Equals, addr 0x2949614, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ExtractLocalName, addr 0x2949634, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ExtractLocalName(::System::Xml::Linq::XName* n);

  /// @brief Method ExtractNamespace, addr 0x294964c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ExtractNamespace(::System::WeakReference* r);

  /// @brief Method Get, addr 0x294882c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* Get(::StringW namespaceName);

  /// @brief Method Get, addr 0x2948dd4, size 0x2e8, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* Get(::StringW namespaceName, int32_t index, int32_t count);

  /// @brief Method GetHashCode, addr 0x2949620, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetName, addr 0x2949230, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XName* GetName(::StringW localName);

  /// @brief Method GetName, addr 0x29490bc, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XName* GetName(::StringW localName, int32_t index, int32_t count);

  static inline ::System::Xml::Linq::XNamespace* New_ctor(::StringW namespaceName);

  /// @brief Method ToString, addr 0x2949454, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr ::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>*& __cordl_internal_get__names();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>*> const& __cordl_internal_get__names() const;

  constexpr ::StringW const& __cordl_internal_get__namespaceName() const;

  constexpr ::StringW& __cordl_internal_get__namespaceName();

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  constexpr void __cordl_internal_set__names(::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* value);

  constexpr void __cordl_internal_set__namespaceName(::StringW value);

  /// @brief Method .ctor, addr 0x294935c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW namespaceName);

  static inline ::System::Xml::Linq::XHashtable_1<::System::WeakReference*>* getStaticF_s_namespaces();

  static inline ::System::WeakReference* getStaticF_s_refNone();

  static inline ::System::WeakReference* getStaticF_s_refXml();

  static inline ::System::WeakReference* getStaticF_s_refXmlns();

  /// @brief Method get_NamespaceName, addr 0x294944c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceName();

  /// @brief Method get_None, addr 0x29491c8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* get_None();

  /// @brief Method get_Xml, addr 0x2949548, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* get_Xml();

  /// @brief Method get_Xmlns, addr 0x29495a8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* get_Xmlns();

  /// @brief Method op_Equality, addr 0x294798c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace* right);

  /// @brief Method op_Implicit, addr 0x2949608, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XNamespace* op_Implicit___System__Xml__Linq__XNamespace_(::StringW namespaceName);

  /// @brief Method op_Inequality, addr 0x2949628, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace* right);

  static inline void setStaticF_s_namespaces(::System::Xml::Linq::XHashtable_1<::System::WeakReference*>* value);

  static inline void setStaticF_s_refNone(::System::WeakReference* value);

  static inline void setStaticF_s_refXml(::System::WeakReference* value);

  static inline void setStaticF_s_refXmlns(::System::WeakReference* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XNamespace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XNamespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XNamespace(XNamespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XNamespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XNamespace(XNamespace const&) = delete;

  /// @brief Field _namespaceName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____namespaceName;

  /// @brief Field _hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ____hashCode;

  /// @brief Field _names, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* ____names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XNamespace, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XNamespace, ____namespaceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XNamespace, ____hashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XNamespace, ____names) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XNamespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XNamespace*, "System.Xml.Linq", "XNamespace");
