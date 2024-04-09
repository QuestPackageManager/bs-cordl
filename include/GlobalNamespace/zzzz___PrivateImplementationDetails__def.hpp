#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz___PrivateImplementationDetails__def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(_PrivateImplementationDetails_)
namespace GlobalNamespace {
struct ___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24;
}
// Forward declare root types
namespace GlobalNamespace {
class _PrivateImplementationDetails_;
}
namespace GlobalNamespace {
struct ___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::_PrivateImplementationDetails_);
MARK_VAL_T(::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24);
// Type: ::__StaticArrayInitTypeSize=24
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: Some(1), specified_packing: Some(1) }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::<PrivateImplementationDetails>::__StaticArrayInitTypeSize=24
#pragma pack(push, 1)
struct CORDL_TYPE ___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24();

  /// @brief Size padding 0x18 - 0x0 = 0x18, packed as 0x18
  uint8_t _cordl_size_padding[0x18];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<PrivateImplementationDetails>
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::<PrivateImplementationDetails>*
class CORDL_TYPE _PrivateImplementationDetails_ : public ::System::Object {
public:
  // Declarations
  using __StaticArrayInitTypeSize = 24 = ::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24;

  /// @brief Field 753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1,
                             put = setStaticF_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1))::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize =
      24 753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1;

  static inline ::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24 getStaticF_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1();

  static inline void setStaticF_753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1(::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr _PrivateImplementationDetails_();

public:
  // Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  _PrivateImplementationDetails_(_PrivateImplementationDetails_&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _PrivateImplementationDetails_(_PrivateImplementationDetails_ const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::_PrivateImplementationDetails_, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::_PrivateImplementationDetails_);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::_PrivateImplementationDetails_*, "", "<PrivateImplementationDetails>");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::___PrivateImplementationDetails_____StaticArrayInitTypeSize = 24, "", "<PrivateImplementationDetails>/__StaticArrayInitTypeSize=24");
