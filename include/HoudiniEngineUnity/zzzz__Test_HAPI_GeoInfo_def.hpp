#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_GeoInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_GeoInfo)
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_GeoInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_GeoInfo);
// Dependencies HoudiniEngineUnity.HAPI_GeoInfo, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_HAPI_GeoInfo
class CORDL_TYPE Test_HAPI_GeoInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x24
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::HoudiniEngineUnity::HAPI_GeoInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a96a90, size 0x300, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_GeoInfo* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_GeoInfo* New_ctor(::HoudiniEngineUnity::HAPI_GeoInfo self);

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_GeoInfo value);

  /// @brief Method .ctor, addr 0x3a96a5c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_GeoInfo self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_GeoInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_GeoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_GeoInfo(Test_HAPI_GeoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_GeoInfo(Test_HAPI_GeoInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11883 };

  /// @brief Field self, offset: 0x10, size: 0x24, def value: None
  ::HoudiniEngineUnity::HAPI_GeoInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_GeoInfo, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_GeoInfo, 0x38>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_GeoInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_GeoInfo*, "HoudiniEngineUnity", "Test_HAPI_GeoInfo");
