#pragma once
// IWYU pragma private; include "GlobalNamespace/UtcTimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UtcTimeProvider)
// Forward declare root types
namespace GlobalNamespace {
class UtcTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UtcTimeProvider);
// Dependencies BGNet.Core.ITimeProvider, System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UtcTimeProvider
class CORDL_TYPE UtcTimeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _epoch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__epoch, put = setStaticF__epoch)) ::System::DateTime _epoch;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::GlobalNamespace::UtcTimeProvider* instance;

  /// @brief Convert operator to "::BGNet::Core::ITimeProvider"
  constexpr operator ::BGNet::Core::ITimeProvider*() noexcept;

  /// @brief Method GetTicks, addr 0x22d7840, size 0xb0, virtual true, abstract: false, final true
  inline int64_t GetTicks();

  /// @brief Method GetTimeMs, addr 0x22e8de4, size 0x2c, virtual true, abstract: false, final true
  inline int64_t GetTimeMs();

  static inline ::GlobalNamespace::UtcTimeProvider* New_ctor();

  /// @brief Method .ctor, addr 0x22e8e10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF__epoch();

  static inline ::GlobalNamespace::UtcTimeProvider* getStaticF_instance();

  /// @brief Convert to "::BGNet::Core::ITimeProvider"
  constexpr ::BGNet::Core::ITimeProvider* i___BGNet__Core__ITimeProvider() noexcept;

  static inline void setStaticF__epoch(::System::DateTime value);

  static inline void setStaticF_instance(::GlobalNamespace::UtcTimeProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UtcTimeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UtcTimeProvider(UtcTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UtcTimeProvider(UtcTimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UtcTimeProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UtcTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UtcTimeProvider*, "", "UtcTimeProvider");
