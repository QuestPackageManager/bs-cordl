#pragma once
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
// Type: System.Runtime.Remoting.Activation::RemoteActivationAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Activation::RemoteActivationAttribute*
class CORDL_TYPE RemoteActivationAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _contextProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__contextProperties, put = __cordl_internal_set__contextProperties))::System::Collections::IList* _contextProperties;

  /// @brief Convert operator to "::System::Runtime::Remoting::Contexts::IContextAttribute"
  constexpr operator ::System::Runtime::Remoting::Contexts::IContextAttribute*() noexcept;

  /// @brief Method GetPropertiesForNewContext, addr 0x2598154, size 0x3e8, virtual true, abstract: false, final true
  inline void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);

  /// @brief Method IsContextOK, addr 0x259814c, size 0x8, virtual true, abstract: false, final true
  inline bool IsContextOK(::System::Runtime::Remoting::Contexts::Context* ctx, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor);

  static inline ::System::Runtime::Remoting::Activation::RemoteActivationAttribute* New_ctor(::System::Collections::IList* contextProperties);

  constexpr ::System::Collections::IList*& __cordl_internal_get__contextProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__contextProperties() const;

  constexpr void __cordl_internal_set__contextProperties(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x2598124, size 0x28, virtual false, abstract: false, final false
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

  /// @brief Field _contextProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ____contextProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::RemoteActivationAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Activation::RemoteActivationAttribute, ____contextProperties) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
