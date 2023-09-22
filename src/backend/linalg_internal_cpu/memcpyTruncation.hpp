#ifndef __memcpyTruncation_internal_H__
#define __memcpyTruncation_internal_H__

#include <iostream>
#include <vector>
#include "Type.hpp"
#include "cytnx_error.hpp"
#include "Tensor.hpp"

namespace cytnx {
  namespace linalg_internal {

    void memcpyTruncation_cd(Tensor &U, Tensor &vT, Tensor &S, Tensor &terr,
                             const cytnx_uint64 &keepdim, const double &err, const bool &is_U,
                             const bool &is_vT, const unsigned int &return_err);
    void memcpyTruncation_cf(Tensor &U, Tensor &vT, Tensor &S, Tensor &terr,
                             const cytnx_uint64 &keepdim, const double &err, const bool &is_U,
                             const bool &is_vT, const unsigned int &return_err);
    void memcpyTruncation_d(Tensor &U, Tensor &vT, Tensor &S, Tensor &terr,
                            const cytnx_uint64 &keepdim, const double &err, const bool &is_U,
                            const bool &is_vT, const unsigned int &return_err);
    void memcpyTruncation_f(Tensor &U, Tensor &vT, Tensor &S, Tensor &terr,
                            const cytnx_uint64 &keepdim, const double &err, const bool &is_U,
                            const bool &is_vT, const unsigned int &return_err);

  }  // namespace linalg_internal
}  // namespace cytnx

#endif
