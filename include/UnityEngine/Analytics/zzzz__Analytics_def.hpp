#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Analytics)
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class Analytics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::Analytics);
// Type: UnityEngine.Analytics::Analytics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15936))
// CS Name: ::UnityEngine.Analytics::Analytics*
class CORDL_TYPE Analytics : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsInitialized addr 0x2d424e8 size 0x28 virtual false final false
  static inline bool IsInitialized();

  /// @brief Method RegisterEventWithLimit addr 0x2d42510 size 0x8c virtual false final false
  static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEventWithLimit(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, int32_t ver, ::StringW prefix,
                                                                                 ::StringW assemblyInfo, bool notifyServer);

  /// @brief Method SendEventWithLimit addr 0x2d4259c size 0x5c virtual false final false
  static inline ::UnityEngine::Analytics::AnalyticsResult SendEventWithLimit(::StringW eventName, ::System::Object* parameters, int32_t ver, ::StringW prefix);

  /// @brief Method RegisterEvent addr 0x2d425f8 size 0x90 virtual false final false
  static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, ::StringW prefix);

  /// @brief Method RegisterEvent addr 0x2d42688 size 0x124 virtual false final false
  static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, int32_t ver, ::StringW prefix,
                                                                        ::StringW assemblyInfo);

  /// @brief Method SendEvent addr 0x2d427ac size 0x118 virtual false final false
  static inline ::UnityEngine::Analytics::AnalyticsResult SendEvent(::StringW eventName, ::System::Object* parameters, int32_t ver, ::StringW prefix);

  // Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Analytics(Analytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Analytics(Analytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Analytics();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::Analytics, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::Analytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::Analytics*, "UnityEngine.Analytics", "Analytics");
