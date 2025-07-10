#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSiteOps.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallSiteOps)
namespace System::Runtime::CompilerServices {
class CallSiteBinder;
}
namespace System::Runtime::CompilerServices {
template <typename T> class CallSite_1;
}
namespace System::Runtime::CompilerServices {
class CallSite;
}
namespace System::Runtime::CompilerServices {
template <typename T> class RuleCache_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallSiteOps;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CallSiteOps);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallSiteOps
class CORDL_TYPE CallSiteOps : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AddRule(::System::Runtime::CompilerServices::CallSite_1<T>* site, T rule);

  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline T Bind(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Runtime::CompilerServices::CallSite_1<T>* site,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ClearMatch, addr 0x40fb15c, size 0x1c, virtual false, abstract: false, final false
  static inline void ClearMatch(::System::Runtime::CompilerServices::CallSite* site);

  /// @brief Method CreateMatchmaker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Runtime::CompilerServices::CallSite_1<T>* CreateMatchmaker(::System::Runtime::CompilerServices::CallSite_1<T>* site);

  /// @brief Method GetCachedRules, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetCachedRules(::System::Runtime::CompilerServices::RuleCache_1<T>* cache);

  /// @brief Method GetMatch, addr 0x40fb144, size 0x18, virtual false, abstract: false, final false
  static inline bool GetMatch(::System::Runtime::CompilerServices::CallSite* site);

  /// @brief Method GetRuleCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Runtime::CompilerServices::RuleCache_1<T>* GetRuleCache(::System::Runtime::CompilerServices::CallSite_1<T>* site);

  /// @brief Method GetRules, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetRules(::System::Runtime::CompilerServices::CallSite_1<T>* site);

  /// @brief Method MoveRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void MoveRule(::System::Runtime::CompilerServices::RuleCache_1<T>* cache, T rule, int32_t i);

  /// @brief Method SetNotMatched, addr 0x40fb124, size 0x20, virtual false, abstract: false, final false
  static inline bool SetNotMatched(::System::Runtime::CompilerServices::CallSite* site);

  /// @brief Method UpdateRules, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UpdateRules(::System::Runtime::CompilerServices::CallSite_1<T>* _cordl_this, int32_t matched);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallSiteOps();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallSiteOps", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallSiteOps(CallSiteOps&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallSiteOps", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallSiteOps(CallSiteOps const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CallSiteOps, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CallSiteOps);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallSiteOps*, "System.Runtime.CompilerServices", "CallSiteOps");
