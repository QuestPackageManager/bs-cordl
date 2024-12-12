#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/CDSCollectionETWBCLProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
CORDL_MODULE_EXPORT(CDSCollectionETWBCLProvider)
// Forward declare root types
namespace System::Collections::Concurrent {
class CDSCollectionETWBCLProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Concurrent::CDSCollectionETWBCLProvider);
// Dependencies System.Diagnostics.Tracing.EventSource
namespace System::Collections::Concurrent {
// Is value type: false
// CS Name: System.Collections.Concurrent.CDSCollectionETWBCLProvider
class CORDL_TYPE CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  /// @brief Field Log, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Log, put = setStaticF_Log)) ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* Log;

  /// @brief Method ConcurrentBag_TryPeekSteals, addr 0x4485810, size 0x38, virtual false, abstract: false, final false
  inline void ConcurrentBag_TryPeekSteals();

  /// @brief Method ConcurrentBag_TryTakeSteals, addr 0x44857d8, size 0x38, virtual false, abstract: false, final false
  inline void ConcurrentBag_TryTakeSteals();

  static inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* New_ctor();

  /// @brief Method .ctor, addr 0x44857d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Concurrent::CDSCollectionETWBCLProvider* getStaticF_Log();

  static inline void setStaticF_Log(::System::Collections::Concurrent::CDSCollectionETWBCLProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CDSCollectionETWBCLProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CDSCollectionETWBCLProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CDSCollectionETWBCLProvider(CDSCollectionETWBCLProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Concurrent::CDSCollectionETWBCLProvider, 0x18>, "Size mismatch!");

} // namespace System::Collections::Concurrent
NEED_NO_BOX(::System::Collections::Concurrent::CDSCollectionETWBCLProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::CDSCollectionETWBCLProvider*, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
