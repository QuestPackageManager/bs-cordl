#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XObject)
namespace System::Xml::Linq {
struct SaveOptions;
}
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XObjectChangeEventArgs;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Linq {
class XObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XObject);
// Type: System.Xml.Linq::XObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15568))
// CS Name: ::System.Xml.Linq::XObject*
class CORDL_TYPE XObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::System::Xml::Linq::XContainer* parent;

  /// @brief Field annotations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_annotations, put = __cordl_internal_set_annotations))::System::Object* annotations;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Parent))::System::Xml::Linq::XElement* Parent;

  constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get_parent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XContainer*> const& __cordl_internal_get_parent() const;

  constexpr void __cordl_internal_set_parent(::System::Xml::Linq::XContainer* value);

  constexpr ::System::Object*& __cordl_internal_get_annotations();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_annotations() const;

  constexpr void __cordl_internal_set_annotations(::System::Object* value);

  static inline ::System::Xml::Linq::XObject* New_ctor();

  /// @brief Method .ctor, addr 0x285e10c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NodeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Parent, addr 0x286481c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XElement* get_Parent();

  /// @brief Method AnnotationForSealedType, addr 0x2864898, size 0x144, virtual false, abstract: false, final false
  inline ::System::Object* AnnotationForSealedType(::System::Type* type);

  /// @brief Method Annotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Annotation();

  /// @brief Method NotifyChanged, addr 0x285ea44, size 0xa8, virtual false, abstract: false, final false
  inline bool NotifyChanged(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e);

  /// @brief Method NotifyChanging, addr 0x285e99c, size 0xa8, virtual false, abstract: false, final false
  inline bool NotifyChanging(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e);

  /// @brief Method SkipNotify, addr 0x285fef8, size 0x70, virtual false, abstract: false, final false
  inline bool SkipNotify();

  /// @brief Method GetSaveOptionsFromAnnotations, addr 0x28642c8, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::SaveOptions GetSaveOptionsFromAnnotations();

  // Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XObject(XObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XObject(XObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XObject();

public:
  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XContainer* ___parent;

  /// @brief Field annotations, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___annotations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObject, ___parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XObject, ___annotations) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObject*, "System.Xml.Linq", "XObject");
