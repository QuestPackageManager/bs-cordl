#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenRegistration)
namespace System::Threading {
template <typename T> struct SparselyPopulatedArrayAddInfo_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class Object;
}
namespace System {
class IAsyncDisposable;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Threading {
class CancellationCallbackInfo;
}
// Forward declare root types
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Write type traits
MARK_VAL_T(::System::Threading::CancellationTokenRegistration);
// Type: System.Threading::CancellationTokenRegistration
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2693)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2693), inst: 4999 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2691))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2683)) CS Name: ::System.Threading::CancellationTokenRegistration
struct CORDL_TYPE CancellationTokenRegistration {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>"
  constexpr operator ::System::IEquatable_1<::System::Threading::CancellationTokenRegistration>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*();

  /// @brief Method .ctor addr 0x26123f4 size 0xc virtual false final false
  inline void _ctor(::System::Threading::CancellationCallbackInfo* callbackInfo, ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> registrationInfo);

  /// @brief Method Unregister addr 0x2612400 size 0x7c virtual false final false
  inline bool Unregister();

  /// @brief Method Dispose addr 0x261247c size 0x94 virtual true final true
  inline void Dispose();

  /// @brief Method Equals addr 0x2612590 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2612620 size 0x80 virtual true final true
  inline bool Equals(::System::Threading::CancellationTokenRegistration other);

  /// @brief Method GetHashCode addr 0x26126a0 size 0x90 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method DisposeAsync addr 0x2612730 size 0x94 virtual true final true
  inline ::System::Threading::Tasks::ValueTask DisposeAsync();

  // Ctor Parameters [CppParam { name: "m_callbackInfo", ty: "::System::Threading::CancellationCallbackInfo*", modifiers: "", def_value: None }, CppParam { name: "m_registrationInfo", ty:
  // "::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*>", modifiers: "", def_value: None }]
  constexpr CancellationTokenRegistration(::System::Threading::CancellationCallbackInfo* m_callbackInfo,
                                          ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenRegistration();

  /// @brief Field m_callbackInfo, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::CancellationCallbackInfo* m_callbackInfo;

  /// @brief Field m_registrationInfo, offset: 0x8, size: 0x10, def value: None
  ::System::Threading::SparselyPopulatedArrayAddInfo_1<::System::Threading::CancellationCallbackInfo*> m_registrationInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationTokenRegistration, 0x18>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationTokenRegistration, "System.Threading", "CancellationTokenRegistration");
