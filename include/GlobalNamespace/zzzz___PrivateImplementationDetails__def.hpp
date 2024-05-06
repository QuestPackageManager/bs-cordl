#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(_PrivateImplementationDetails_)
// Forward declare root types
namespace GlobalNamespace {
class _PrivateImplementationDetails_;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::_PrivateImplementationDetails_);
// Type: ::<PrivateImplementationDetails>
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::<PrivateImplementationDetails>*
class CORDL_TYPE _PrivateImplementationDetails_ : public ::System::Object {
public:
  // Declarations
  /// @brief Field 1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F,
                             put = setStaticF_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F)) int64_t 1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F;

  /// @brief Field F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67,
                             put = setStaticF_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67)) int64_t F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67;

  static inline int64_t getStaticF_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F();

  static inline int64_t getStaticF_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67();

  static inline void setStaticF_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F(int64_t value);

  static inline void setStaticF_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67(int64_t value);

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
