#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/AppDomainLevelActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AppDomainLevelActivator)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class AppDomainLevelActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::AppDomainLevelActivator);
// Type: System.Runtime.Remoting.Activation::AppDomainLevelActivator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Activation::AppDomainLevelActivator*
class CORDL_TYPE AppDomainLevelActivator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NextActivator))::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Field _activationUrl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__activationUrl, put = __cordl_internal_set__activationUrl))::StringW _activationUrl;

  /// @brief Field _next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::System::Runtime::Remoting::Activation::IActivator* _next;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  /// @brief Method Activate, addr 0x2824e48, size 0x4cc, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  static inline ::System::Runtime::Remoting::Activation::AppDomainLevelActivator* New_ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next);

  constexpr ::StringW const& __cordl_internal_get__activationUrl() const;

  constexpr ::StringW& __cordl_internal_get__activationUrl();

  constexpr ::System::Runtime::Remoting::Activation::IActivator*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Activation::IActivator*> const& __cordl_internal_get__next() const;

  constexpr void __cordl_internal_set__activationUrl(::StringW value);

  constexpr void __cordl_internal_set__next(::System::Runtime::Remoting::Activation::IActivator* value);

  /// @brief Method .ctor, addr 0x28248ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW activationUrl, ::System::Runtime::Remoting::Activation::IActivator* next);

  /// @brief Method get_NextActivator, addr 0x2824e40, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr ::System::Runtime::Remoting::Activation::IActivator* i___System__Runtime__Remoting__Activation__IActivator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDomainLevelActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDomainLevelActivator(AppDomainLevelActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDomainLevelActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDomainLevelActivator(AppDomainLevelActivator const&) = delete;

  /// @brief Field _activationUrl, offset: 0x10, size: 0x8, def value: None
  ::StringW ____activationUrl;

  /// @brief Field _next, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Activation::IActivator* ____next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::AppDomainLevelActivator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Activation::AppDomainLevelActivator, ____activationUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Activation::AppDomainLevelActivator, ____next) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::AppDomainLevelActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::AppDomainLevelActivator*, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
