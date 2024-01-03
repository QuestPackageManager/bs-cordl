#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalExtensions)
namespace System {
class Type;
}
namespace Zenject {
template <typename TSignal> class BindSignalIdToBinder_1;
}
namespace Zenject {
class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalExtensions);
// Type: Zenject::SignalExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10656))
// CS Name: ::Zenject::SignalExtensions*
class CORDL_TYPE SignalExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDefaultSignalDeclarationBindInfo, addr 0x2ec279c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Zenject::SignalDeclarationBindInfo* CreateDefaultSignalDeclarationBindInfo(::Zenject::DiContainer* container, ::System::Type* signalType);

  /// @brief Method DeclareSignal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> static inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* DeclareSignal(::Zenject::DiContainer* container);

  /// @brief Method BindSignal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> static inline ::Zenject::BindSignalIdToBinder_1<TSignal>* BindSignal(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "SignalExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalExtensions(SignalExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalExtensions(SignalExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalExtensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalExtensions*, "Zenject", "SignalExtensions");
