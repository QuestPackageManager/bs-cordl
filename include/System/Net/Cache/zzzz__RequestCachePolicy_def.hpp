#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCachePolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RequestCachePolicy)
namespace System::Net::Cache {
struct RequestCacheLevel;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCachePolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cache::RequestCachePolicy);
// Dependencies System.Net.Cache.RequestCacheLevel, System.Object
namespace System::Net::Cache {
// Is value type: false
// CS Name: System.Net.Cache.RequestCachePolicy
class CORDL_TYPE RequestCachePolicy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Level)) ::System::Net::Cache::RequestCacheLevel Level;

  /// @brief Field m_Level, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Level, put = __cordl_internal_set_m_Level)) ::System::Net::Cache::RequestCacheLevel m_Level;

  static inline ::System::Net::Cache::RequestCachePolicy* New_ctor(::System::Net::Cache::RequestCacheLevel level);

  /// @brief Method ToString, addr 0x43ef6dc, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Net::Cache::RequestCacheLevel const& __cordl_internal_get_m_Level() const;

  constexpr ::System::Net::Cache::RequestCacheLevel& __cordl_internal_get_m_Level();

  constexpr void __cordl_internal_set_m_Level(::System::Net::Cache::RequestCacheLevel value);

  /// @brief Method .ctor, addr 0x43ef5d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Cache::RequestCacheLevel level);

  /// @brief Method get_Level, addr 0x43ef6d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheLevel get_Level();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCachePolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCachePolicy(RequestCachePolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCachePolicy(RequestCachePolicy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9843 };

  /// @brief Field m_Level, offset: 0x10, size: 0x4, def value: None
  ::System::Net::Cache::RequestCacheLevel ___m_Level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Cache::RequestCachePolicy, ___m_Level) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCachePolicy, 0x18>, "Size mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCachePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachePolicy*, "System.Net.Cache", "RequestCachePolicy");
