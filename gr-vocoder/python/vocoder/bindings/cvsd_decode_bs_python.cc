/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/vocoder/cvsd_decode_bs.h>
// pydoc.h is automatically generated in the build directory
#include <cvsd_decode_bs_pydoc.h>

void bind_cvsd_decode_bs(py::module& m)
{

    using cvsd_decode_bs = ::gr::vocoder::cvsd_decode_bs;


    py::class_<cvsd_decode_bs,
               gr::sync_interpolator,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<cvsd_decode_bs>>(m, "cvsd_decode_bs", D(cvsd_decode_bs))

        .def(py::init(&cvsd_decode_bs::make),
             py::arg("min_step") = 10,
             py::arg("max_step") = 1280,
             py::arg("step_decay") = 0.9990234375,
             py::arg("accum_decay") = 0.96875,
             py::arg("K") = 32,
             py::arg("J") = 4,
             py::arg("pos_accum_max") = 32767,
             py::arg("neg_accum_max") = -32767,
             D(cvsd_decode_bs, make))


        .def("min_step", &cvsd_decode_bs::min_step, D(cvsd_decode_bs, min_step))


        .def("max_step", &cvsd_decode_bs::max_step, D(cvsd_decode_bs, max_step))


        .def("step_decay", &cvsd_decode_bs::step_decay, D(cvsd_decode_bs, step_decay))


        .def("accum_decay", &cvsd_decode_bs::accum_decay, D(cvsd_decode_bs, accum_decay))


        .def("K", &cvsd_decode_bs::K, D(cvsd_decode_bs, K))


        .def("J", &cvsd_decode_bs::J, D(cvsd_decode_bs, J))


        .def("pos_accum_max",
             &cvsd_decode_bs::pos_accum_max,
             D(cvsd_decode_bs, pos_accum_max))


        .def("neg_accum_max",
             &cvsd_decode_bs::neg_accum_max,
             D(cvsd_decode_bs, neg_accum_max))

        ;
}
