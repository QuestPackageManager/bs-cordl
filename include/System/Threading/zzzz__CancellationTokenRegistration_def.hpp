#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenRegistration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenRegistration)
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
namespace System::Threading {
template <typename T> struct SparselyPopulatedArrayAddInfo_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Write type traits
MARK_VAL_T(::System::Threading::CancellationTokenRegistration);
// Dependencies System.IAsyncDisposable, System.IDisposable, System.IEquatable`1<T>, System.Threading.SparselyPopulatedArrayAddInfo`1<T>
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.CancellationTokenRegistration
struct CORDL_TYPE CancellationTokenRegistration {
public:
  // Declarations
  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>"
  constexpr operator ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>*();

  /// @brief Method Dispose, addr 0x3e4ae90, size 0x94, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeAsync, addr 0x3e4b17c, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  /// @brief Method Equals, addr 0x3e4afe0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3e4b070, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::System::Threading::CancellationTokenRegistration other);

  /// @brief Method GetHashCode, addr 0x3e4b0f0, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Unregister, addr 0x3e4ae14, size 0x7c, virtual false, abstract: false, final false
  inline bool Unregister();

  /// @brief Method .ctor, addr 0x3e4ae08, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationCallbackInfo* callbackInfo, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> registrationInfo);

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>"
  constexpr ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>* i___System__IEquatable_1___System__Threading__CancellationTokenRegistration_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenRegistration();

  // Ctor Parameters [CppParam { name: "m_callbackInfo", ty: "::System::Threading::CancellationCallbackInfo*", modifiers: "", def_value: None }, CppParam { name: "m_registrationInfo", ty:
  // "::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*>", modifiers: "", def_value: None }]
  constexpr CancellationTokenRegistration(::System::Threading::CancellationCallbackInfo* m_callbackInfo,
                                          ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_callbackInfo, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::CancellationCallbackInfo* m_callbackInfo;

  /// @brief Field m_registrationInfo, offset: 0x8, size: 0x10, def value: None
  ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::CancellationTokenRegistration, m_callbackInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::CancellationTokenRegistration, m_registrationInfo) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationTokenRegistration, 0x18>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationTokenRegistration, "System.Threading", "CancellationTokenRegistration");
