#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_ParmInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_ParmInfo)
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_ParmInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_ParmInfo);
// Type: HoudiniEngineUnity::Test_HAPI_ParmInfo
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_HAPI_ParmInfo*
class CORDL_TYPE Test_HAPI_ParmInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x90
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::HoudiniEngineUnity::HAPI_ParmInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x25f3b0c, size 0x78c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ParmInfo* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_ParmInfo* New_ctor(::HoudiniEngineUnity::HAPI_ParmInfo self);

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_ParmInfo& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_ParmInfo value);

  /// @brief Method .ctor, addr 0x25f3ad8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_ParmInfo self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_ParmInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_ParmInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ParmInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_ParmInfo(Test_HAPI_ParmInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ParmInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_ParmInfo(Test_HAPI_ParmInfo const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x90, def value: None
  ::HoudiniEngineUnity::HAPI_ParmInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_ParmInfo, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_ParmInfo, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_ParmInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_ParmInfo*, "HoudiniEngineUnity", "Test_HAPI_ParmInfo");
