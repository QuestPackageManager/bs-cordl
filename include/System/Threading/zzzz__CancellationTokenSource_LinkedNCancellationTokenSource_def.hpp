#pragma once
// IWYU pragma private; include "System\Threading\CancellationTokenSource_LinkedNCancellationTokenSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_LinkedNCancellationTokenSource)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class LinkedNCancellationTokenSource_CancellationTokenSource___c;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CancellationTokenSource_LinkedNCancellationTokenSource;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource");
// Dependencies System.Threading.CancellationTokenRegistration, System.Threading.CancellationTokenSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.CancellationTokenSource/LinkedNCancellationTokenSource
class CORDL_TYPE CancellationTokenSource_LinkedNCancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
  // Declarations
  using __c = ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c;

  /// @brief Field _linkingRegistrations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__linkingRegistrations, put = __cordl_internal_set__linkingRegistrations)) ::ArrayW<::System::Threading::CancellationTokenRegistration>
      _linkingRegistrations;

  /// @brief Field s_linkedTokenCancelDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_linkedTokenCancelDelegate, put = setStaticF_s_linkedTokenCancelDelegate)) ::System::Action_1<::System::Object*>* s_linkedTokenCancelDelegate;

  /// @brief Method Dispose, addr 0x5cad42c, size 0x90, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource* New_ctor(::ArrayW<::System::Threading::CancellationToken> tokens);

  constexpr ::ArrayW<::System::Threading::CancellationTokenRegistration> const& __cordl_internal_get__linkingRegistrations() const;

  constexpr ::ArrayW<::System::Threading::CancellationTokenRegistration>& __cordl_internal_get__linkingRegistrations();

  constexpr void __cordl_internal_set__linkingRegistrations(::ArrayW<::System::Threading::CancellationTokenRegistration> value);

  /// @brief Method .ctor, addr 0x5cad094, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::CancellationToken> tokens);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_linkedTokenCancelDelegate();

  static inline void setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenSource_LinkedNCancellationTokenSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_LinkedNCancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationTokenSource_LinkedNCancellationTokenSource(CancellationTokenSource_LinkedNCancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_LinkedNCancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationTokenSource_LinkedNCancellationTokenSource(CancellationTokenSource_LinkedNCancellationTokenSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2699 };

  /// @brief Field _linkingRegistrations, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Threading::CancellationTokenRegistration> ____linkingRegistrations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource, ____linkingRegistrations) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
