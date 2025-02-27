#pragma once
// IWYU pragma private; include "LufsMetering/LufsMeter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LufsMeter)
namespace LufsMetering {
struct LoudnessData;
}
namespace LufsMetering {
class LufsMeter___c;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace LufsMetering {
class LufsMeter;
}
namespace LufsMetering {
class LufsMeter___c;
}
// Write type traits
MARK_REF_PTR_T(::LufsMetering::LufsMeter);
MARK_REF_PTR_T(::LufsMetering::LufsMeter___c);
// Dependencies System.Object
namespace LufsMetering {
// Is value type: false
// CS Name: LufsMetering.LufsMeter/<>c
class CORDL_TYPE LufsMeter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::LufsMetering::LufsMeter___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_3<float_t, float_t, float_t>* __9__5_0;

  static inline ::LufsMetering::LufsMeter___c* New_ctor();

  /// @brief Method <IntegratedLoudness>b__5_0, addr 0x3b8355c, size 0x8, virtual false, abstract: false, final false
  inline float_t _IntegratedLoudness_b__5_0(float_t g, float_t z);

  /// @brief Method .ctor, addr 0x3b83554, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::LufsMetering::LufsMeter___c* getStaticF___9();

  static inline ::System::Func_3<float_t, float_t, float_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::LufsMetering::LufsMeter___c* value);

  static inline void setStaticF___9__5_0(::System::Func_3<float_t, float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LufsMeter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LufsMeter___c(LufsMeter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LufsMeter___c(LufsMeter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LufsMetering::LufsMeter___c, 0x10>, "Size mismatch!");

} // namespace LufsMetering
// Dependencies System.Object
namespace LufsMetering {
// Is value type: false
// CS Name: LufsMetering.LufsMeter
class CORDL_TYPE LufsMeter : public ::System::Object {
public:
  // Declarations
  using __c = ::LufsMetering::LufsMeter___c;

  /// @brief Field _channelGains, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__channelGains, put = setStaticF__channelGains)) ::ArrayW<float_t, ::Array<float_t>*> _channelGains;

  /// @brief Field _inputDataNative, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inputDataNative,
                      put = __cordl_internal_set__inputDataNative)) ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>
      _inputDataNative;

  /// @brief Field _outputDataNative, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__outputDataNative,
                      put = __cordl_internal_set__outputDataNative)) ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>
      _outputDataNative;

  /// @brief Method AnalyzeClipLoudness, addr 0x3b81d9c, size 0xc4, virtual false, abstract: false, final false
  inline ::LufsMetering::LoudnessData AnalyzeClipLoudness(::UnityEngine::AudioClip* clip);

  /// @brief Method IntegratedLoudness, addr 0x3b81e60, size 0xe1c, virtual false, abstract: false, final false
  inline ::LufsMetering::LoudnessData IntegratedLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate);

  /// @brief Method MomentaryLoudness, addr 0x3b82c8c, size 0x7d0, virtual false, abstract: false, final false
  inline float_t MomentaryLoudness(::ArrayW<float_t, ::Array<float_t>*> interleavedData, int32_t numChannels, int32_t rate);

  static inline ::LufsMetering::LufsMeter* New_ctor();

  /// @brief Method SwapData, addr 0x3b82c7c, size 0x10, virtual false, abstract: false, final false
  inline void SwapData();

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const& __cordl_internal_get__inputDataNative() const;

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& __cordl_internal_get__inputDataNative();

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> const& __cordl_internal_get__outputDataNative() const;

  constexpr ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*>& __cordl_internal_get__outputDataNative();

  constexpr void __cordl_internal_set__inputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value);

  constexpr void __cordl_internal_set__outputDataNative(::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> value);

  /// @brief Method .ctor, addr 0x3b8345c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__channelGains();

  static inline void setStaticF__channelGains(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LufsMeter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LufsMeter(LufsMeter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LufsMeter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LufsMeter(LufsMeter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5413 };

  /// @brief Field kBlockSize offset 0xffffffff size 0x4
  static constexpr float_t kBlockSize{ static_cast<float_t>(0.4f) };

  /// @brief Field _inputDataNative, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> ____inputDataNative;

  /// @brief Field _outputDataNative, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeArray_1<float_t>, ::Array<::Unity::Collections::NativeArray_1<float_t>>*> ____outputDataNative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LufsMetering::LufsMeter, ____inputDataNative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LufsMetering::LufsMeter, ____outputDataNative) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LufsMetering::LufsMeter, 0x20>, "Size mismatch!");

} // namespace LufsMetering
NEED_NO_BOX(::LufsMetering::LufsMeter);
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::LufsMeter*, "LufsMetering", "LufsMeter");
NEED_NO_BOX(::LufsMetering::LufsMeter___c);
DEFINE_IL2CPP_ARG_TYPE(::LufsMetering::LufsMeter___c*, "LufsMetering", "LufsMeter/<>c");
