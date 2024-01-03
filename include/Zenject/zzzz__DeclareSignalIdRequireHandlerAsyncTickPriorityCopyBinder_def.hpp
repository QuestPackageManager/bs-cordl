#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
CORDL_MODULE_EXPORT(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder)
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
// Type: Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10651))
// CS Name: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*
class CORDL_TYPE DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder {
public:
  // Declarations
  static inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method .ctor, addr 0x2ec2344, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method WithId, addr 0x2ec238c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* WithId(::System::Object* identifier);

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder");
