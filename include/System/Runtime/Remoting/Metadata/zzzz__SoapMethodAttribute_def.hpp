#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapMethodAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapMethodAttribute
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3139))
// CS Name: ::System.Runtime.Remoting.Metadata::SoapMethodAttribute*
class CORDL_TYPE SoapMethodAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
  // Declarations
  /// @brief Field _responseElement, offset 0x28, size 0x8
  __declspec(property(get = __get__responseElement, put = __set__responseElement))::StringW _responseElement;

  /// @brief Field _responseNamespace, offset 0x30, size 0x8
  __declspec(property(get = __get__responseNamespace, put = __set__responseNamespace))::StringW _responseNamespace;

  /// @brief Field _returnElement, offset 0x38, size 0x8
  __declspec(property(get = __get__returnElement, put = __set__returnElement))::StringW _returnElement;

  /// @brief Field _soapAction, offset 0x40, size 0x8
  __declspec(property(get = __get__soapAction, put = __set__soapAction))::StringW _soapAction;

  /// @brief Field _useAttribute, offset 0x48, size 0x1
  __declspec(property(get = __get__useAttribute, put = __set__useAttribute)) bool _useAttribute;

  /// @brief Field _namespace, offset 0x50, size 0x8
  __declspec(property(get = __get__namespace, put = __set__namespace))::StringW _namespace;

  __declspec(property(get = get_UseAttribute)) bool UseAttribute;

  __declspec(property(get = get_XmlNamespace))::StringW XmlNamespace;

  constexpr ::StringW& __get__responseElement();

  constexpr ::StringW const& __get__responseElement() const;

  constexpr void __set__responseElement(::StringW value);

  constexpr ::StringW& __get__responseNamespace();

  constexpr ::StringW const& __get__responseNamespace() const;

  constexpr void __set__responseNamespace(::StringW value);

  constexpr ::StringW& __get__returnElement();

  constexpr ::StringW const& __get__returnElement() const;

  constexpr void __set__returnElement(::StringW value);

  constexpr ::StringW& __get__soapAction();

  constexpr ::StringW const& __get__soapAction() const;

  constexpr void __set__soapAction(::StringW value);

  constexpr bool& __get__useAttribute();

  constexpr bool const& __get__useAttribute() const;

  constexpr void __set__useAttribute(bool value);

  constexpr ::StringW& __get__namespace();

  constexpr ::StringW const& __get__namespace() const;

  constexpr void __set__namespace(::StringW value);

  static inline ::System::Runtime::Remoting::Metadata::SoapMethodAttribute* New_ctor();

  /// @brief Method .ctor addr 0x234d270 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_UseAttribute addr 0x234d278 size 0x8 virtual true final false
  inline bool get_UseAttribute();

  /// @brief Method get_XmlNamespace addr 0x234d280 size 0x8 virtual true final false
  inline ::StringW get_XmlNamespace();

  /// @brief Method SetReflectionObject addr 0x234d288 size 0x1ac virtual true final false
  inline void SetReflectionObject(::System::Object* reflectionObject);

  // Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapMethodAttribute(SoapMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapMethodAttribute(SoapMethodAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapMethodAttribute();

public:
  /// @brief Field _responseElement, offset: 0x28, size: 0x8, def value: None
  ::StringW ____responseElement;

  /// @brief Field _responseNamespace, offset: 0x30, size: 0x8, def value: None
  ::StringW ____responseNamespace;

  /// @brief Field _returnElement, offset: 0x38, size: 0x8, def value: None
  ::StringW ____returnElement;

  /// @brief Field _soapAction, offset: 0x40, size: 0x8, def value: None
  ::StringW ____soapAction;

  /// @brief Field _useAttribute, offset: 0x48, size: 0x1, def value: None
  bool ____useAttribute;

  /// @brief Field _namespace, offset: 0x50, size: 0x8, def value: None
  ::StringW ____namespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapMethodAttribute, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____responseElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____responseNamespace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____returnElement) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____soapAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____useAttribute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute, ____namespace) == 0x50, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapMethodAttribute*, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
