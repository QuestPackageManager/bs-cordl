#pragma once
// IWYU pragma private; include "BeatSaber/Init/IPlatformInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPlatformInit)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::Init {
class IPlatformInit;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::IPlatformInit);
// Type: BeatSaber.Init::IPlatformInit
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Init {
// Is value type: false
// CS Name: ::BeatSaber.Init::IPlatformInit*
class CORDL_TYPE IPlatformInit {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetAppVersionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method InitializeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  /// @brief Method get_IsInitialized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInitialized();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlatformInit(IPlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformInit(IPlatformInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18306 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::IPlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::IPlatformInit*, "BeatSaber.Init", "IPlatformInit");
