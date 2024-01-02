#pragma once
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
// Type: System.Net.Cache::RequestCachePolicy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9321)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9322))
// CS Name: ::System.Net.Cache::RequestCachePolicy*
class CORDL_TYPE RequestCachePolicy : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Level, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Level, put = __set_m_Level))::System::Net::Cache::RequestCacheLevel m_Level;

  __declspec(property(get = get_Level))::System::Net::Cache::RequestCacheLevel Level;

  constexpr ::System::Net::Cache::RequestCacheLevel& __get_m_Level();

  constexpr ::System::Net::Cache::RequestCacheLevel const& __get_m_Level() const;

  constexpr void __set_m_Level(::System::Net::Cache::RequestCacheLevel value);

  static inline ::System::Net::Cache::RequestCachePolicy* New_ctor(::System::Net::Cache::RequestCacheLevel level);

  /// @brief Method .ctor, addr 0x29f1374, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Cache::RequestCacheLevel level);

  /// @brief Method get_Level, addr 0x29f1484, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Cache::RequestCacheLevel get_Level();

  /// @brief Method ToString, addr 0x29f148c, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestCachePolicy(RequestCachePolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestCachePolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestCachePolicy(RequestCachePolicy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestCachePolicy();

public:
  /// @brief Field m_Level, offset: 0x10, size: 0x4, def value: None
  ::System::Net::Cache::RequestCacheLevel ___m_Level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCachePolicy, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Cache::RequestCachePolicy, ___m_Level) == 0x10, "Offset mismatch!");

} // namespace System::Net::Cache
NEED_NO_BOX(::System::Net::Cache::RequestCachePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachePolicy*, "System.Net.Cache", "RequestCachePolicy");
