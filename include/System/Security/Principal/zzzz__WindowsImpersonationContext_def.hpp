#pragma once
// IWYU pragma private; include "System/Security/Principal/WindowsImpersonationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsImpersonationContext)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::WindowsImpersonationContext);
// Type: System.Security.Principal::WindowsImpersonationContext
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// CS Name: ::System.Security.Principal::WindowsImpersonationContext*
class CORDL_TYPE WindowsImpersonationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _token, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token))::System::IntPtr _token;

  /// @brief Field undo, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_undo, put = __cordl_internal_set_undo)) bool undo;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CloseToken, addr 0x2816b00, size 0x4, virtual false, abstract: false, final false
  static inline bool CloseToken(::System::IntPtr token);

  /// @brief Method Dispose, addr 0x2816a28, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DuplicateToken, addr 0x2816a20, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr DuplicateToken(::System::IntPtr token);

  static inline ::System::Security::Principal::WindowsImpersonationContext* New_ctor(::System::IntPtr token);

  /// @brief Method RevertToSelf, addr 0x2816afc, size 0x4, virtual false, abstract: false, final false
  static inline bool RevertToSelf();

  /// @brief Method SetCurrentToken, addr 0x2816a24, size 0x4, virtual false, abstract: false, final false
  static inline bool SetCurrentToken(::System::IntPtr token);

  /// @brief Method Undo, addr 0x2816a38, size 0xc4, virtual false, abstract: false, final false
  inline void Undo();

  constexpr ::System::IntPtr const& __cordl_internal_get__token() const;

  constexpr ::System::IntPtr& __cordl_internal_get__token();

  constexpr bool const& __cordl_internal_get_undo() const;

  constexpr bool& __cordl_internal_get_undo();

  constexpr void __cordl_internal_set__token(::System::IntPtr value);

  constexpr void __cordl_internal_set_undo(bool value);

  /// @brief Method .ctor, addr 0x281631c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr token);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsImpersonationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowsImpersonationContext(WindowsImpersonationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowsImpersonationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowsImpersonationContext(WindowsImpersonationContext const&) = delete;

  /// @brief Field _token, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ____token;

  /// @brief Field undo, offset: 0x18, size: 0x1, def value: None
  bool ___undo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsImpersonationContext, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsImpersonationContext, ____token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsImpersonationContext, ___undo) == 0x18, "Offset mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WindowsImpersonationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsImpersonationContext*, "System.Security.Principal", "WindowsImpersonationContext");
