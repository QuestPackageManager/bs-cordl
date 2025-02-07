#pragma once
// IWYU pragma private; include "BeatSaber/Init/IPlatformInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPlatformInit)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BeatSaber::Init {
class IPlatformInit;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::IPlatformInit);
// Dependencies Zenject.IInitializable
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.IPlatformInit
class CORDL_TYPE IPlatformInit {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetAppVersionAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  /// @brief Method get_IsInitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformInit(IPlatformInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::IPlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::IPlatformInit*, "BeatSaber.Init", "IPlatformInit");
