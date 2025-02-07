#pragma once
// IWYU pragma private; include "Zenject/Internal/LookupId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LookupId)
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject::Internal {
class LookupId;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::LookupId);
// Dependencies System.Object, Zenject.BindingId
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.LookupId
class CORDL_TYPE LookupId : public ::System::Object {
public:
  // Declarations
  /// @brief Field BindingId, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_BindingId, put = __cordl_internal_set_BindingId)) ::Zenject::BindingId BindingId;

  /// @brief Field Provider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider)) ::Zenject::IProvider* Provider;

  /// @brief Method GetHashCode, addr 0x4b5a884, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Zenject::Internal::LookupId* New_ctor();

  static inline ::Zenject::Internal::LookupId* New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId);

  constexpr ::Zenject::BindingId const& __cordl_internal_get_BindingId() const;

  constexpr ::Zenject::BindingId& __cordl_internal_get_BindingId();

  constexpr ::Zenject::IProvider* const& __cordl_internal_get_Provider() const;

  constexpr ::Zenject::IProvider*& __cordl_internal_get_Provider();

  constexpr void __cordl_internal_set_BindingId(::Zenject::BindingId value);

  constexpr void __cordl_internal_set_Provider(::Zenject::IProvider* value);

  /// @brief Method .ctor, addr 0x4b5a7e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4b5a7e8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookupId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookupId(LookupId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookupId(LookupId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12708 };

  /// @brief Field Provider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ___Provider;

  /// @brief Field BindingId, offset: 0x18, size: 0x10, def value: None
  ::Zenject::BindingId ___BindingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::LookupId, ___Provider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::LookupId, ___BindingId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::LookupId, 0x28>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::LookupId);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::LookupId*, "Zenject.Internal", "LookupId");
