#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/RemoteActivationAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RemoteActivationAttribute)
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.RemoteActivationAttribute
class CORDL_TYPE RemoteActivationAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _contextProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__contextProperties, put = __cordl_internal_set__contextProperties)) ::System::Collections::IList* _contextProperties;

  /// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
  constexpr operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept;

  /// @brief Method GetPropertiesForNewContext, addr 0x59270f4, size 0x3c8, virtual true, abstract: false, final true
  inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);

  /// @brief Method IsContextOK, addr 0x59270ec, size 0x8, virtual true, abstract: false, final true
  inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);

  static inline ::System::Runtime::Remoting::Activation::RemoteActivationAttribute* New_ctor(::System::Collections::IList* contextProperties);

  constexpr ::System::Collections::IList* const& __cordl_internal_get__contextProperties() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get__contextProperties();

  constexpr void __cordl_internal_set__contextProperties(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x59270e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* contextProperties);

  /// @brief Convert to "::System::Runtime::Remoting::Contexts::IContextAttribute"
  constexpr ::System::Runtime::Remoting::Contexts::IContextAttribute* i___System__Runtime__Remoting__Contexts__IContextAttribute() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteActivationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteActivationAttribute(RemoteActivationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteActivationAttribute(RemoteActivationAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3152 };

  /// @brief Field _contextProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ____contextProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Activation::RemoteActivationAttribute, ____contextProperties) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::RemoteActivationAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
