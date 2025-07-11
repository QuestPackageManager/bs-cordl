#pragma once
// IWYU pragma private; include "System/Xml/Linq/XName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XName)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XName);
// Dependencies System.IEquatable`1<T>, System.Object, System.Runtime.Serialization.ISerializable
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XName
class CORDL_TYPE XName : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Namespace)) ::System::Xml::Linq::XNamespace* Namespace;

  __declspec(property(get = get_NamespaceName)) ::StringW NamespaceName;

  /// @brief Field _hashCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Field _localName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localName, put = __cordl_internal_set__localName)) ::StringW _localName;

  /// @brief Field _ns, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ns, put = __cordl_internal_set__ns)) ::System::Xml::Linq::XNamespace* _ns;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Xml::Linq::XName*>"
  constexpr operator ::System::IEquatable_1<::System::Xml::Linq::XName*>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Equals, addr 0x424d374, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Get, addr 0x424cdb4, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XName* Get(::StringW expandedName);

  /// @brief Method Get, addr 0x424d344, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XName* Get(::StringW localName, ::StringW namespaceName);

  /// @brief Method GetHashCode, addr 0x424d380, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Linq::XName* New_ctor();

  static inline ::System::Xml::Linq::XName* New_ctor(::System::Xml::Linq::XNamespace* ns, ::StringW localName);

  /// @brief Method System.IEquatable<System.Xml.Linq.XName>.Equals, addr 0x424d388, size 0xc, virtual true, abstract: false, final true
  inline bool System_IEquatable_System_Xml_Linq_XName__Equals(::System::Xml::Linq::XName* other);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x424d394, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x424cd24, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr ::StringW const& __cordl_internal_get__localName() const;

  constexpr ::StringW& __cordl_internal_get__localName();

  constexpr ::System::Xml::Linq::XNamespace* const& __cordl_internal_get__ns() const;

  constexpr ::System::Xml::Linq::XNamespace*& __cordl_internal_get__ns();

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  constexpr void __cordl_internal_set__localName(::StringW value);

  constexpr void __cordl_internal_set__ns(::System::Xml::Linq::XNamespace* value);

  /// @brief Method .ctor, addr 0x424d3cc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x424cc5c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XNamespace* ns, ::StringW localName);

  /// @brief Method get_LocalName, addr 0x424cd14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Namespace, addr 0x424cd1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XNamespace* get_Namespace();

  /// @brief Method get_NamespaceName, addr 0x4245d58, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_NamespaceName();

  /// @brief Convert to "::System::IEquatable_1<::System::Xml::Linq::XName*>"
  constexpr ::System::IEquatable_1<::System::Xml::Linq::XName*>* i___System__IEquatable_1___System__Xml__Linq__XName__() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method op_Equality, addr 0x42455d8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Xml::Linq::XName* left, ::System::Xml::Linq::XName* right);

  /// @brief Method op_Implicit, addr 0x424d368, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XName* op_Implicit___System__Xml__Linq__XName_(::StringW expandedName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XName(XName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XName(XName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17981 };

  /// @brief Field _ns, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XNamespace* ____ns;

  /// @brief Field _localName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____localName;

  /// @brief Field _hashCode, offset: 0x20, size: 0x4, def value: None
  int32_t ____hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XName, ____ns) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XName, ____localName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XName, ____hashCode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XName, 0x28>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XName*, "System.Xml.Linq", "XName");
