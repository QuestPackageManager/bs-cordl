#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource_Linked1CancellationTokenSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_Linked1CancellationTokenSource)
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class CancellationTokenSource_Linked1CancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource);
// Dependencies System.Threading.CancellationTokenRegistration, System.Threading.CancellationTokenSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.CancellationTokenSource/Linked1CancellationTokenSource
class CORDL_TYPE CancellationTokenSource_Linked1CancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
  // Declarations
  /// @brief Field _reg1, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get__reg1, put = __cordl_internal_set__reg1)) ::System::Threading::CancellationTokenRegistration _reg1;

  /// @brief Method Dispose, addr 0x5afd094, size 0x34, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource* New_ctor(::System::Threading::CancellationToken token1);

  constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get__reg1() const;

  constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get__reg1();

  constexpr void __cordl_internal_set__reg1(::System::Threading::CancellationTokenRegistration value);

  /// @brief Method .ctor, addr 0x5afcc40, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationToken token1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenSource_Linked1CancellationTokenSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_Linked1CancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationTokenSource_Linked1CancellationTokenSource(CancellationTokenSource_Linked1CancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_Linked1CancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationTokenSource_Linked1CancellationTokenSource(CancellationTokenSource_Linked1CancellationTokenSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2696 };

  /// @brief Field _reg1, offset: 0x40, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ____reg1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource, ____reg1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*, "System.Threading", "CancellationTokenSource/Linked1CancellationTokenSource");
